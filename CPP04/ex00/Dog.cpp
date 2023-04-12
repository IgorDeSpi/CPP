/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:29:18 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 22:09:02 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->setType("Dog");
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	*this = obj;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->setType(obj.getType());
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ": Waf waf waf waf waf ! " << std::endl;
}
