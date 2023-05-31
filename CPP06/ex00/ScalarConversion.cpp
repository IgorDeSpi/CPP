/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:39:16 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/31 14:39:23 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{
	std::cout << "ScalarConversion Default Constructor called" << std::endl;
}

ScalarConversion::ScalarConversion(ScalarConversion const &obj)
{
	std::cout << "ScalarConversion Copy Constructor called" << std::endl;
	*this = obj;
}

ScalarConversion::~ScalarConversion()
{
	std::cout << "ScalarConversion Destructor called" << std::endl;
}

ScalarConversion	&ScalarConversion::operator=(ScalarConversion const &obj)
{
	(void)obj;
	std::cout << "ScalarConversion Copy assignment operator called" << std::endl;
	return *this;
}

bool	ScalarConversion::isChar(std::string str)
{
	if (str.size() == 1 && !std::isdigit(str[0]))
	{
		return (true);
	}
	return (false);
}

bool	ScalarConversion::isInt(std::string str)
{
	unsigned long int	i = 0;

	if (str[0] == '-' || str[0] == '+')
		i++;
	while(std::isdigit(str[i]))
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}

bool	ScalarConversion::isFloat(std::string str)
{
	unsigned long int	i = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while(std::isdigit(str[i]))
		i++;
	if (str[i] == '.' && std::isdigit(str[i + 1]))
		i++;
	else
		return (false);
	while (std::isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	else
		return (false);
	if (str.size() == i)
		return (true);
	return (false);
}

bool	ScalarConversion::isDouble(std::string str)
{
	unsigned long int	i = 0;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str[i] == '.' && std::isdigit(str[i + 1]))
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}

void	ScalarConversion::convert(std::string const &str)
{
	enum	type {CHAR, INT, FLOAT, DOUBLE};
	bool	(*ftab[5])(std::string str) = {isChar, isInt, isFloat, isDouble, NULL};
}
