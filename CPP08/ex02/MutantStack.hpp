/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:55:34 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/11 16:02:24 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator	iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &obj);
		virtual ~MutantStack();
		MutantStack<T> &operator=(MutantStack<T> const &obj);

		iterator	begin();
		iterator	end();
		const_iterator	cbegin() const;
		const_iterator	cend() const;
		reverse_iterator	rbegin();
		reverse_iterator	rend();
		const_reverse_iterator	crbegin() const;
		const_reverse_iterator	crend() const;

};

# include "MutantStack.tpp"

#endif
