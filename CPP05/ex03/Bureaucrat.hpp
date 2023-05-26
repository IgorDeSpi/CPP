/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:08:59 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/22 17:17:44 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include <cstring>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &obj);

		const std::string	getName(void) const;
		int					getGrade(void) const;
		int 				testGrade(int grade) const;

		void gradeIncrement();
		void gradeDecrement();

		void	signForm(AForm &AForm);
		void	execForm(AForm &AForm);

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
};

std::ostream &operator <<(std::ostream &o, const Bureaucrat &rhs);

#endif
