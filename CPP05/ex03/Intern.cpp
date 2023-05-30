/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:29:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/30 11:30:50 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const &obj)
{
	(void)obj;
	std::cout << "Intern Copy assignment operator called" << std::endl;
	return *this;
}

AForm	*Intern::makeForm(std::string const form, std::string const target)
{
	enum	formID {SHRUBBERY, ROBOTOMY, PRESIDENTIAL};
	const std::string	ftab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	n = 0;

	for (; n < 4; n++)
	{
		if (n != 3 && ftab[n] == form)
			break ;
	}
	switch (n)
	{
		case SHRUBBERY :
			std::cout << "Intern creates " << ftab[0] << " form." << std::endl;
			return (new ShrubberyCreationForm(target));
		case ROBOTOMY :
			std::cout << "Intern creates " << ftab[1] << " form." << std::endl;
			return (new RobotomyRequestForm(target));
		case PRESIDENTIAL :
			std::cout << "Intern creates " << ftab[2] << " form." << std::endl;
			return (new PresidentialPardonForm(target));
		default :
		{
			std::cout << "This Form Name don't match with any Form on the current list !" << std::endl;
			return (0);
		}
	}
}
