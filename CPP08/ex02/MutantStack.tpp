/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:55:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/11 18:53:55 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << "MutantStack Default Constructor called" << std::endl;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &obj)
{
	std::cout << "MutantStack Copy assignment operator called" << std::endl;
	if (this == obj)
		return (*this);
	std::stack<T>::operator=(obj);
	return (*this);
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj) : std::stack<T>(obj)
{
	std::cout << "MutantStack Copy Constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack Destructor called" << std::endl;
}

//Return an iterator on the beginning of the mutant stack
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

//Return an iterator on the end of the mutant stack
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

//Return a const-iterator on the beginning of the mutant stack
template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.begin();
}

//Return a const-iterator on the end of the mutant stack
template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.end();
}

//Return a reverse iterator on the beginning of the mutant stack
template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

//Return a reverse iterator on the end of the mutant stack
template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

//Return a reverse const-iterator on the beginning of the mutant stack
template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return this->c.rbegin();
}

//Return a reverse const-iterator on the end of the mutant stack
template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
	return this->c.rend();
}
