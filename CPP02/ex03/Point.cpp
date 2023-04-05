/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:42:03 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 19:35:16 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::~Point()
{

}

Point::Point(Point const &other)
{
	*this = other;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y)
{

}

Point	&Point::operator=(Point const &other)
{
	(void)other;
	return *this;
}

Fixed const	&Point::getX(void) const
{
	return _x;
}

Fixed const	&Point::getY(void) const
{
	return _y;
}
