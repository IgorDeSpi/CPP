/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:41:39 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 19:29:53 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	Fixed::_fract = 8;

Fixed::Fixed(): _value(0)
{

}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::Fixed(int const n)
{
	_value = n << _fract;
}

Fixed::Fixed(float const n)
{
	_value = roundf(n * (1 << _fract));
}

Fixed::~Fixed()
{

}

Fixed	&Fixed::operator=(Fixed const &other)
{
	if (this != &other)
	{
		_value = other.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (float)(1 << _fract);
}

int		Fixed::toInt(void) const
{
	return (int)(_value >> _fract);
}

bool	Fixed::operator>(Fixed const &other) const
{
	return getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(Fixed const &other) const
{
	return getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const
{
	return getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return getRawBits() != other.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	(void)other;
	return (roundf(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	operator++();
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	operator--();
	return (temp);
}

Fixed	&Fixed::operator++()
{
	++this->_value;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--this->_value;
	return (*this);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b) ? a : b;
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}

Fixed const	&min(Fixed const &a, Fixed const &b)
{
	return Fixed::min(a, b);
}

Fixed const	&max(Fixed const &a, Fixed const &b)
{
	return Fixed::max(a, b);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
