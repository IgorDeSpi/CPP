/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:35:01 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 19:20:10 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{

}

Fixed::Fixed(int const value) : _rawBits(value << _bits)
{

}

Fixed::Fixed(float const value) : _rawBits(roundf(value * (1 << _bits)))
{

}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::~Fixed()
{

}

int	Fixed::getRawBits() const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(this->getRawBits()) >> _bits);
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	this->_rawBits = other.getRawBits();
	return *this;
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
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
	++this->_rawBits;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--this->_rawBits;
	return (*this);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b) ? a : b;
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b) ? a : b;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
