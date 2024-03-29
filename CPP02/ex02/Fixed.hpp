/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:51 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 19:20:30 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_rawBits;
		static const int	_bits = 8;
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &other);
		~Fixed();

		Fixed	&operator=(Fixed const &other);

		bool	operator>(Fixed const &other) const;
		bool	operator<(Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;

		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator++();
		Fixed	&operator--();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		static	Fixed max(Fixed &a, Fixed &b);
		static	const Fixed max(Fixed const &a, Fixed const &b);
		static	Fixed min(Fixed &a, Fixed &b);
		static	const Fixed min(Fixed const &a, Fixed const &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
