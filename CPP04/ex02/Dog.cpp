/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:13 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:26:41 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->AAnimal::setType("Dog");
	this->_brain = new Brain;
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &obj)
{
	this->_brain = new Brain;
	*this =obj;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->setType(obj.getType());
	*this->_brain = *obj.getBrain();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ": Waf waf waf waf waf ! " << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}

void	Dog::printIdea(int const &idea) const
{
	if (idea >= 0 && idea <= 99)
		std::cout << this->_brain->getIdea(idea) << std::endl;
}

void	Dog::setIdea(std::string const &ideas, int const &idea)
{
	if (idea >= 0 && idea <= 99)
		this->_brain->setIdea(ideas, idea);
}
