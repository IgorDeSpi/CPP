/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:42:52 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/15 12:54:50 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Undefined"), _signGrade(160), _execGrade(160)
{
	this->_signed = false;
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string const name, unsigned int const signGrade, unsigned int const execGrade) : _name(name), _signGrade(testGrade(signGrade)), _execGrade(testGrade(execGrade))
{
	this->_signed = false;
	std::cout << "Form Overload Constructor called" << std::endl;
}

Form::Form(Form const &obj) : _name(obj.getName()), _signGrade(obj.getSignGrade()), _execGrade(obj.getExecGrade())
{
	this->_signed = false;
	*this = obj;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(Form const &obj)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	(void)obj;
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

int	Form::testGrade(unsigned int grade) const
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
	catch(GradeTooHighException &e)
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

void	Form::formChecker(Bureaucrat &bureaucrat)
{
	if (this->getSigned() == true)
		throw (Form::SignStatusException());
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
		throw (GradeUnavailbleException());
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (Bureaucrat::GradeTooLowException());
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->getSigned() == true)
		throw (SignStatusException());
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
		throw (GradeUnavailbleException());
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (Bureaucrat::GradeTooLowException());
	this->_signed = true;
}

void	Form::execChecker(const Bureaucrat &obj) const
{
	if (this->getSigned() == false)
		throw (NoSignStatusException());
	if (this->getSignGrade() == 0 || this->getExecGrade() == 0)
		throw (GradeUnavailbleException());
	else if (obj.getGrade() > this->getExecGrade())
		throw (Bureaucrat::GradeTooLowException());
}

void Form::beExec(Bureaucrat &bureaucrat)
{
	try
	{
		this->execChecker(bureaucrat);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (GradeUnavailbleException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (NoSignStatusException &e)
	{
		std::cerr << bureaucrat.getName() << " couldn't execute " << this->getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is not correct ! It is too high !");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is not correct ! It is too low !");
}

const char *Form::GradeUnavailbleException::what() const throw()
{
	return ("Form grade is unavalaible and it can't be used or signed !");
}

const char *Form::SignStatusException::what() const throw()
{
	return ("Form is already signed ! Dont need another signature !");
}

const char *Form::NoSignStatusException::what() const throw()
{
	return ("Form is not signed ! Can't use Form if it's not signed !");
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form name " << rhs.getName() << " can be signed with grade " << rhs.getSignGrade();
	o << ", execute with grade " << rhs.getExecGrade() << " and sign status is ";
	if (rhs.getSigned() == false)
		o << "unsigned!";
	else
		o << "signed!";
	return o;
}
