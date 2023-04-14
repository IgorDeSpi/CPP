/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:10:46 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 10:49:16 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
	this->setBrain("Empty Idea");
}


Brain::Brain(Brain const &obj)
{
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &obj)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return *this;
}

void	Brain::setBrain(std::string const idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

void	Brain::setIdea(std::string const &ideas,int const &idea)
{
	if (idea >= 0 && idea <= 99)
		this->_ideas[idea] = ideas;
}

void	Brain::printIdea(int const &idea) const
{
	if (idea >= 0 && idea <= 99)
		std::cout << this->_ideas[idea] << std::endl;
}

std::string	Brain::getIdea(int const &idea) const
{
	if (idea >= 0 && idea <= 99)
		return (this->_ideas[idea]);
	return ("Wrong Idea Scope");
}
