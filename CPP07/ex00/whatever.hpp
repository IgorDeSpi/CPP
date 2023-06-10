/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:43:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/10 11:48:57 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
T max (T &a, T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T &max2 (T &a, T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T min (T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T &min2 (T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
void	swap (T &a, T &b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

#endif
