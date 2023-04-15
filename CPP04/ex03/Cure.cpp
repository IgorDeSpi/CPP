/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:47:46 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:28:54 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{

}

Cure::Cure(const Cure& other): AMateria(other)
{

}

Cure::~Cure()
{

}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other) {}
	return *this;
}

AMateria*	Cure::clone(void) const
{
	return new Cure();
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
