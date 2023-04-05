/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:41:50 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/05 12:44:03 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
public:
	Point();
	Point(Point const &other);
	Point(Fixed const x, Fixed const y);
	~Point();

	Point	&operator=(Point const &other);

	Fixed const	&getX(void) const;
	Fixed const	&getY(void) const;
};

#endif
