/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:05:14 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/10 16:13:15 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <typeinfo>

template<typename T>
class	Array
{
	private:
		T	*_array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &obj);
		~Array();
		Array	&operator=(Array const &obj);
		T	&operator[](unsigned int idx);
		unsigned int	size() const;
};

# include "Array.tpp"

#endif
