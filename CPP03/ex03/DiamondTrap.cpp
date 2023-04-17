/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:17:07 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/17 13:24:28 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() // : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
	std::cout << "Name is " << *this << std::endl;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energyPoints = 50;
	std::cout << "with " << (this->getHitPoints()) << " Hit points" << std::endl;
	std::cout << "with " << (this->getEnergyPoints()) << " Energy points" << std::endl;
	std::cout << "and with " << (this->getAttackDamage()) << " Attack damage" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name) // : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Overload Default constructor called" << std::endl;
	this->ClapTrap::_name += "_clap_name";
	this->DiamondTrap::_name = name;
	std::cout << "Name is " << *this << std::endl;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energyPoints = 50;
	std::cout << "with " << (this->getHitPoints()) << " Hit points" << std::endl;
	std::cout << "with " << (this->getEnergyPoints()) << " Energy points" << std::endl;
	std::cout << "and with " << (this->getAttackDamage()) << " Attack damage" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	(void)obj;
	std::cout << "DiamondTrap Copy assignement operator called" << std::endl;
	this->setName(obj.getName());
	this->setHitPoints(obj.getHitPoints());
	this->setAttackDamage(obj.getAttackDamage());
	return *this;
}

void	DiamondTrap::whoAmI()
{
	if (this->getHitPoints() == 0)
	{
		std::cout << *this << " is dead !" << std::endl;
		return ;
	}
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
