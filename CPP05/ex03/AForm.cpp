/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:35:56 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/26 10:54:20 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Undefined"), _signGrade(160), _execGrade(160)
{
	this->_signed = false;
	std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm(std::string const name, unsigned int const signGrade, unsigned int const execGrade) : _name(name), _signGrade(testGrade(signGrade)), _execGrade(testGrade(execGrade))
{
	this->_signed = false;
	std::cout << "AForm Overload Constructor called" << std::endl;
}

AForm::AForm(AForm const &obj) : _name(obj.getName()), _signGrade(obj.getSignGrade()), _execGrade(obj.getExecGrade())
{
	this->_signed = false;
	*this = obj;
}
AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}
AForm &AForm::operator=(AForm const &obj)
{
	std::cout << "AForm Copy assignment operator called" << std::endl;
	(void)obj;
	return *this;
}

std::string AForm::getName() const
{
	return (this->_name);
}

int AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExecGrade() const
{
	return (this->_execGrade);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::testGrade(unsigned int grade) const
{
	try
	{
		if (grade < 1)
		{
			throw (GradeTooHighException());
		}
		if (grade > 150)
		{
			throw (GradeTooLowException());
		}
	}
	catch (GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	return (grade);
}

void	AForm::formChecker(Bureaucrat &bureaucrat)
{
	if (this->getSigned() == true)
	{
		throw (AForm::SignStatusException());
	}
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
	{
		throw (GradeUnavailableException());
	}
	if (bureaucrat.getGrade() > this->getSignGrade())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getSigned() == true)
	{
		throw (SignStatusException());
	}
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
	{
		throw (GradeUnavailableException());
	}
	if (bureaucrat.getGrade() > this->getSignGrade())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	this->_signed = true;
}

void AForm::execChecker(const Bureaucrat& obj) const
{
	if (this->getSigned() == false)
	{
		throw (NoSignStatusException());
	}
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
	{
		throw (GradeUnavailableException());
	}
	else if (obj.getGrade() > this->getExecGrade())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
}

void	AForm::beExec(Bureaucrat &bureaucrat)
{
	try
	{
		this->execChecker(bureaucrat);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn’t execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (GradeUnavailableException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn’t execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (NoSignStatusException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn’t execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade is not correct ! It is too high !");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade is not correct ! It is too low !");
}

const char *AForm::GradeUnavailableException::what() const throw()
{
	return ("Form grade is unvailable and it can't be used or signed!");
}

const char *AForm::SignStatusException::what() const throw()
{
	return ("Form is already signed ! Don't need another signature !");
}

const char *AForm::NoSignStatusException::what() const throw()
{
	return ("Form is not signed ! Can't use Form if it's not signed !");
}

std::ostream &operator<<(std::ostream &o,AForm const &rhs)
{
	o << "Form name " << rhs.getName() << " can be sign with grade " << rhs.getSignGrade();
	o << ", execute with grade " << rhs.getExecGrade() << " and sign status is ";
	if (rhs.getSigned() == false)
		o << "unsigned!";
	else
		o << "signed!";
	return o;
}
