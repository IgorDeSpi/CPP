/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:48:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:32:56 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): known(new AMateria*[KNOWN_SIZE])
{
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		known[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other): known(new AMateria*[KNOWN_SIZE])
{
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		if (other.known[i])
			known[i] = other.known[i];
		else
			known[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		if (known[i])
			delete known[i];
	delete [] known;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other) {
		for (size_t i = 0; i < KNOWN_SIZE; i++)
			if (known[i])
				delete known[i];
		for (size_t i = 0; i < KNOWN_SIZE; i++)
			if (other.known[i])
				known[i] = other.known[i];
			else
				known[i] = NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	size_t	i = 0;

	for (; i < KNOWN_SIZE && known[i]; i++)
		;

	if (i == KNOWN_SIZE)
		return ;

	known[i] = m;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		if (known[i]->getType() == type)
			return known[i]->clone();

	return NULL;
}
