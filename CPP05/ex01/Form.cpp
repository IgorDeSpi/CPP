/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:42:52 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/12 16:00:33 by ide-spir         ###   ########.fr       */
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
