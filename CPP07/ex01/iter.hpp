/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:54:12 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/10 11:57:02 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<class T>
void	iter(T *array, int arraySize, void (*f)(T&))
{
	for(int i = 0; i < arraySize; ++i)
	{
		T	&element = array[i];
		f(element);
	}
}

template<class T>
void	print(T &x)
{
	std::cout << x << std::endl;
	return;
}

#endif
