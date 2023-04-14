/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:33 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:25:15 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->AAnimal::setType("Cat");
	this->_brain = new Brain;
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(Cat const &obj)
{
	this->_brain = new Brain;
	*this = obj;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &obj)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->setType(obj.getType());
	*this->_brain = *obj.getBrain();
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "I am a " << this->getType() << ": Meoooooooooooooooooooooooooooowww ! " << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::printIdea(int const &idea) const
{
	if (idea >= 0 && idea <= 99)
		std::cout << this->_brain->getIdea(idea) << std::endl;
}

void	Cat::setIdea(std::string const &ideas, int const &idea)
{
	if (idea >= 0 && idea <= 99)
		this->_brain->setIdea(ideas, idea);
}
