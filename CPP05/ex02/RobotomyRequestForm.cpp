/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:09:11 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/22 16:43:28 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	this->_target = obj._target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	if(target.size() < 1)
		_target = ("Undefined");
	std::cout << "RobotomyRequestForm Overload Constructor called" << std::endl;
}

std::string const	RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		this->execChecker(executor);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << executor.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch(GradeUnavailableException &e)
	{
		std::cerr << executor.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch(NoSignStatusException &e)
	{
		std::cerr << executor.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::srand(time(0));
	bool	trueFalse = ((rand() % 4) < 2);
	std::cout << "Bzrrr Bzrrrr Bzrrrrrr Bzrr Bzrrr ";
	std::cout << "Bzrrr Bzrr Bzrrr Bzrrr Bzrrrrr" << std::endl;
	std::cout << "Bzrrrr Bzrrrrr Bzrrr Bzrr Bzrrrr";

	if (trueFalse == true)
		std::cout << this->getTarget() << " robotomy failed !" << std::endl;
	else
		std::cout << this->getTarget() << " was robotomized succesfully !" << std::endl;
}
