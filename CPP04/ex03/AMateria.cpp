/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:47:28 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:25:45 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria& other): type(other.type)
{

}

AMateria::AMateria(const std::string& type): type(type)
{

}

AMateria&	AMateria::operator=(const AMateria& other)
{
	if (this != &other) {}
	return *this;
}

const std::string&	AMateria::getType() const
{
	return type;
}
