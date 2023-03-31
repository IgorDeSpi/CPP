/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:37:42 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/31 15:51:15 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_rawBits;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(int const value);
		Fixed(Fixed const &autre);
		~Fixed();

		Fixed	&operator = (Fixed const &autre);
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
