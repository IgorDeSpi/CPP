/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:12:20 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/26 10:55:53 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknow Name"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	std::cout << "Bureaucrat Overload Constructor called" << std::endl;
	this->_grade = grade;
	this->_grade = testGrade(grade);
	return ;
}

int	Bureaucrat::testGrade(int grade) const
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
		return (this->getGrade() == 1) ? 1 : 150;
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
		return (150);
	}
	return (grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj.getName())
{
	*this = obj;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	this->_grade = obj.getGrade();
	return *this;
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

void Bureaucrat::gradeIncrement()
{
	this->_grade = testGrade(this->_grade - 1);
	return ;
}

void Bureaucrat::gradeDecrement()
{
	this->_grade = testGrade(this->_grade + 1);
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is not correct ! It is too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is not correct ! It is too low !");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

void	Bureaucrat::signForm(AForm &AForm)
{
	try
	{
		AForm.beSigned(*this);
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << this->getName() << " couldn’t sign " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (AForm::GradeUnavailableException &e)
	{
		std::cerr << this->getName() << " couldn’t sign " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (AForm::SignStatusException &e)
	{
		std::cerr << this->getName() << " couldn’t sign " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << AForm.getName() << "." <<std::endl;
	return ;
}

void	Bureaucrat::execForm(AForm &AForm)
{
	try
	{
		AForm.execChecker(*this);
	}
	catch (GradeTooLowException &e)
	{
		std::cerr << this->getName() << " couldn’t execute " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (AForm::GradeUnavailableException &e)
	{
		std::cerr << this->getName() << " couldn’t execute " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch (AForm::NoSignStatusException &e)
	{
		std::cerr << this->getName() << " couldn’t execute " << AForm.getName() << " because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	AForm.execute(*this);
	std::cout << this->getName() << " executed " << AForm.getName() << "." <<std::endl;
	return ;
}
