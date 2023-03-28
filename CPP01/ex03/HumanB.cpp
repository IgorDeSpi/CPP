/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/28 14:30:18 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB Construct is called for " << this->_name << " with " << this->_weapon << " weapon " << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon)
{
	std::cout << "HumanB Construct is called for " << this->_name << " with " << this->_weapon->getType() << " weapon " << std::endl;
}

HumanB::HumanB(HumanB const &human) : _name(human._name)
{
	if (human._weapon)
		this->_weapon = human._weapon;
	else
		this->_weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "HumanB Destruct is called for " << this->_name << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
