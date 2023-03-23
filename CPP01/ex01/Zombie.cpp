/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:21:29 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/23 14:42:33 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("NULL")
{
	std::cout << "Constructor called to build " << this->_name << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor caled to super build " << this->_name << std::endl;
}

Zombie::Zombie(Zombie const &autre) : _name(autre._name)
{

}

Zombie::~Zombie()
{
	std::cout << "Destructor called to delete " << _name << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie1 = new Zombie(name);
	return (zombie1);
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}

void	randomChump(std::string name)
{
	Zombie	zombie2 = Zombie(name);
	zombie2.annonce();
}

void	Zombie::annonce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
