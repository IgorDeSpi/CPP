/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:05:14 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/01 14:44:54 by ide-spir         ###   ########.fr       */
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
		T	&operator[](unsigned int idx) const;
		unsigned int	size() const;
		void		display(std::ostream& stream) const;
};


template<typename T>
std::ostream&	operator<<(std::ostream& stream, Array<T>const& cl);

# include "Array.tpp"

#endif
