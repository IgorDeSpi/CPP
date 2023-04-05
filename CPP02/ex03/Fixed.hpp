/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:41:30 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 13:56:00 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int			_value;
		static int	_fract;
	public:
		Fixed();
		Fixed(Fixed const &other);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed();

		Fixed	&operator=(Fixed const &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const &autre) const;
		bool	operator<(Fixed const &autre) const;
		bool	operator>=(Fixed const &autre) const;
		bool	operator<=(Fixed const &autre) const;
		bool	operator==(Fixed const &autre) const;
		bool	operator!=(Fixed const &autre) const;

		Fixed	operator+(Fixed const &autre) const;
		Fixed	operator-(Fixed const &autre) const;
		Fixed	operator*(Fixed const &autre) const;
		Fixed	operator/(Fixed const &autre) const;

		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator++();
		Fixed	&operator--();

		static	const Fixed &max(Fixed const &a, Fixed const &b);
		static	const Fixed &min(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
Fixed const	&min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);

#endif
