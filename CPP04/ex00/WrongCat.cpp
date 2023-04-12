/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:30:15 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 22:08:45 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
	this->WrongAnimal::setType("WrongCat");
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	*this = obj;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &obj)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	this->setType(obj.getType());
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ": Piiiiiiiiiiiiiiiiiiiiiiiiiiiiiiikaaaaaaaaaaaaaaaaaaaaaaaaachuuuuuuuuuuuuuuuuuu !" << std::endl;
}
