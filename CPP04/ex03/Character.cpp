/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:47:40 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:27:15 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) : ICharacter(), name(name), inventory(new AMateria*[INV_SIZE])
{
	for (size_t i = 0; i < INV_SIZE; i++)
		inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	for (size_t i = 0; i < INV_SIZE; i++)
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
}

Character::~Character()
{
	for (size_t i = 0; i < INV_SIZE; i++)
		if (inventory[i])
			delete inventory[i];
	delete [] inventory;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other) {
		for (size_t i = 0; i < INV_SIZE; i++)
			if (inventory[i])
				delete inventory[i];
		for (size_t i = 0; i < INV_SIZE; i++)
			if (other.inventory[i])
				inventory[i] = other.inventory[i]->clone();
			else
				inventory[i] = NULL;
	}
	return *this;
}

const std::string&	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* m)
{
	size_t	i = 0;

	for (; i < INV_SIZE && inventory[i]; i++)
		;

	if (i == INV_SIZE)
		return ;

	inventory[i] = m;
}

void	Character::unequip(int idx)
{
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}
