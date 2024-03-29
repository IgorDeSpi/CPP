/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:21:49 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/22 17:15:38 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const			_name;
		bool						_signed;
		unsigned int const			_signGrade;
		unsigned int const			_execGrade;

	public:
		AForm();
		AForm(std::string const name, unsigned int const signGrade, unsigned int const execGrade);
		AForm(AForm const &obj);
		virtual ~AForm();
		AForm &operator=(AForm const &obj);

		std::string	getName() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		bool		getSigned() const;

		void	beSigned(Bureaucrat &bureaucrat);
		void	beExec(Bureaucrat &bureaucrat);

		int		testGrade(unsigned int grade) const;
		void	formChecker(Bureaucrat &bureaucrat);
		void	execChecker(const Bureaucrat& obj) const;

		virtual void		execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeUnavailableException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class SignStatusException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class NoSignStatusException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};

std::ostream &operator <<(std::ostream &o, AForm const &rhs);

#endif
