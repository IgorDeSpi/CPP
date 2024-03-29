/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:58:57 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:22:37 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->setType("Undefined");
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &obj)
{
	*this = obj;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &obj)
{
	std::cout << "AAnimal Copy assignement operator called" << std::endl;
	this->setType(obj.getType());
	return *this;
}

AAnimal::AAnimal(std::string const &type)
{
	if (type.size() < 1)
		this->setType("Undefined");
	else
		this->setType(type);
	std::cout << "AAnimal Overload Constructor called" << std::endl;
}

void	AAnimal::setType(std::string const &type)
{
	this->_type = type;
}

const std::string	&AAnimal::getType() const
{
	return this->_type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "I am a " << _type << " my sound is like *#__*_*__#*" << std::endl;
}
