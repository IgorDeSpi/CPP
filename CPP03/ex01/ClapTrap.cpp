/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:14:51 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/17 09:36:56 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->setName("Undefined");
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Overload Default constructor called" << std::endl;
    if (name.size() < 1)
        this->setName("Undefined");
    std::cout << "Name is " << *this << std::endl;
    std::cout << "with " << (this->getHitPoints()) << " Hit points" << std::endl;
	std::cout << "with " << (this->getEnergyPoints()) << " Energy points" << std::endl;
	std::cout << "and with " << (this->getAttackDamage()) << " Attack damage" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    //std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getHitPoints() const
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "ClapTrap Copy assignement operator called" << std::endl;
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
    return *this;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &rhs)
{
    o << rhs.getName();
    return o;
}

void    ClapTrap::setName(std::string const &name)
{
    this->_name = name;
}

void    ClapTrap::setHitPoints(int const hitPoints)
{
    if (hitPoints >= 0)
        this->_hitPoints = hitPoints;
    else
        this->_hitPoints = 0;
}

void    ClapTrap::setEnergyPoints(int const energyPoints)
{
    if (energyPoints >= 0)
        this->_energyPoints = energyPoints;
    else
        this->_energyPoints = 0;
}

void    ClapTrap::setAttackDamage(int const attackDamage)
{
    if (attackDamage >= 0)
        this->_attackDamage = attackDamage;
    else
        this->_attackDamage = 0;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->getHitPoints() == 0)
    {
        std::cout << *this << " is dead !" << std::endl;
        return ;
    }
    if (this->getEnergyPoints() == 0)
    {
        std::cout << *this << " doesn't have enough energy !" << std::endl;
        return ;
    }
    if (target.size() < 1)
        std::cout << "ClapTrap " << *this << " attacks Undefined ClapTrap causing " << this->getAttackDamage() << " points of damage !" << std::endl;
    else
        std::cout << "ClapTrap " << *this << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage !" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPoints() == 0)
    {
        std::cout << *this << " is already dead ! Stop the relentlessness please ! " << std::endl;
        return ;
    }
    this->setHitPoints(this->getHitPoints() - amount);
    std::cout << *this << " take " << amount << " damage and he has actually " << this->getHitPoints() << " hit points !" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getHitPoints() == 0)
    {
        std::cout << *this << " is dead ! " << std::endl;
        return ;
    }
    if (this->getEnergyPoints() == 0)
    {
        std::cout << *this << " doesn't have enough energy !" << std::endl;
        return ;
    }
    this->setHitPoints(this->getHitPoints() + amount);
    std::cout << *this << " be repaired to " << amount << " hit points and he has actually " << this->getHitPoints() << " hit points !" << std::endl;
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}
