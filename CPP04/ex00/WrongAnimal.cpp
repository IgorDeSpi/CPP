/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:29:42 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 21:58:52 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->setType("Undefined");
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->setType(obj.getType());
	return *this;
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	if (type.size() < 1)
		this->setType("Undefined");
	else
		this->setType(type);
	std::cout << "WrongAnimal Overload Constructor called" << std::endl;
}

void	WrongAnimal::setType(std::string const &type)
{
	this->_type = type;
}

const std::string	&WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong, I am a " << _type << " and I don't make sound -_(-_-)_- !" << std::endl;
}
