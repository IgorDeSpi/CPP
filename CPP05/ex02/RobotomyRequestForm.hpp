/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:57:04 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/22 15:52:54 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "PresidentialPardonForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

		std::string const	getTarget() const;
		
		void	execute(Bureaucrat const &executor) const;
};

#endif
