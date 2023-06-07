/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:53:42 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/07 16:09:57 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization()
{
	std::cout << "Serialization Default Constructor called" << std::endl;
}

Serialization::Serialization(Serialization const &obj)
{
	std::cout << "Serialization Copy Constructor called" << std::endl;
	*this = obj;
}

Serialization::~Serialization()
{
	std::cout << "Serialization Destructor called" << std::endl;
}

Serialization	&Serialization::operator=(Serialization const &obj)
{
	(void)obj;
	std::cout << "Serialization Copy assignment operator called" << std::endl;
	return *this;
}

uintptr_t	Serialization::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serialization::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

void	Data::getValues() const
{
	std::cout << "Data str = " << this->str_value << " and Data int = " << this->int_value << std::endl;
}
