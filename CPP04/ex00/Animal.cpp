/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:28:37 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 14:59:35 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->setType("Undefined");
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &obj)
{
	std::cout << "Animal Copy assignement operator called" << std::endl;
	this->setType(obj.getType());
	return *this;
}
