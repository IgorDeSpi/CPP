/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:48:28 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:30:40 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{

}

Ice::Ice(const Ice& other): AMateria(other)
{

}

Ice::~Ice()
{

}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other) {}
	return *this;
}

AMateria*	Ice::clone(void) const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
