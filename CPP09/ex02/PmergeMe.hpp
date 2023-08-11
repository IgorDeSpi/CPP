/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:14:30 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/11 07:54:00 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef PMERGEME_HPP
// # define PMERGEME_HPP

// # include <string>
// # include <iostream>
// # include <sstream>
// # include <vector>
// # include <deque>
// # include <algorithm>

// class	OverflowException : std::exception
// {
// 	public:
// 		virtual const char*	what() const throw();
// };

// std::vector<int>	FJAVector(std::vector<int> v);
// std::deque<int>		FJADeque(std::deque<int> d);
// int					parsing(int argc, char **argv, std::vector<int> &v, std::deque<int> &d);

// template	<typename T>
// void	ft_print(T &container)
// {
// 	std::cout << "{ ";
// 	for (size_t i = 0; i < container.size() - 1; i++)
// 		std::cout << container[i] << ", ";
// 		std::cout << container[container.size() - 1] << " ";
// 		std::cout << "};" << std::endl;
// }

// //split
// template	<typename T>
// T	split(T &main, int leftover)
// {
// 	T	pend;
// 	typename T::iterator	it = main.begin();
// 	size_t	halfSize = main.size() / 2;

// 	while (main.size() > halfSize)
// 	{
// 		pend.push_back(*it);
// 		it = main.erase(it);
// 		it += 1;
// 	}
// 	if (leftover >= 0)
// 		pend.push_back(leftover);
// 	return (pend);
// }

// template	<typename T> // we assume that container size is even
// T	&makePairs(T &container)
// {
// 	typename T::iterator	it = container.begin();

// 	while (it != container.end())
// 	{
// 		if (*it > *(it + 1))
// 			std::iter_swap(it, it + 1);
// 		it += 2;
// 	}
// 	return (container);
// }

// template	<typename T>
// T	mergePairs(T &lhs, T &rhs) // we assume that container size is even
// {
// 	T						res;
// 	typename T::iterator	max_lhs;
// 	typename T::iterator	max_rhs;

// 	while (!(lhs.empty() && rhs.empty()))
// 	{
// 		max_lhs = std::max_element(lhs.begin(), lhs.end());
// 		max_rhs = std::max_element(rhs.begin(), rhs.end());
// 		if (rhs.empty() || (!lhs.empty() && *max_lhs > *max_rhs))
// 		{
// 			if (max_lhs + 1 != lhs.end() && *max_lhs == *(max_lhs + 1))
// 				max_lhs++;
// 			res.insert(res.begin(), max_lhs - 1, max_lhs + 1);
// 			lhs.erase(max_lhs - 1, max_lhs + 1);
// 		}
// 		else
// 		{
// 			if (max_rhs + 1 != rhs.end() && *max_rhs == *(max_rhs + 1))
// 				max_rhs++;
// 			res.insert(res.begin(), max_rhs - 1, max_rhs + 1);
// 			rhs.erase(max_rhs - 1, max_rhs + 1);
// 		}
// 	}
// 	return (res);
// }

// template	<typename T>
// T	&orderPairs(T &container) // we assume that container size is even
// {
// 	//We need to mergesort container on the 2n + 1 values so we have a container ordered by pairs size every 2n + 1 indexes are the max value of a pair
// 	size_t	size = container.size();
// 	if (size > 2) // division of container for the merge sort
// 	{
// 		size_t	split = (size / 2);
// 		if (split % 2 == 1)
// 			--split;

// 		//Split into 2 T
// 		T	lhs(container.begin(), container.begin() + split);
// 		T	rhs(container.begin() + split, container.end());

// 		//Recursion to merge sort each split
// 		lhs = orderPairs(lhs);
// 		rhs = orderPairs(rhs);

// 		//Merge
// 		container = mergePairs(lhs, rhs);
// 	}
// 	return (container);
// }

// template	<typename T>
// T	insert(T &main, T &pend)
// {
// 	std::vector<size_t>	toInsert;
// 	size_t				size = pend.size();
// 	size_t				i = 0;
// 	size_t				jac = 1;
// 	size_t				lastJac = 0;
// 	size_t				lastLastJac = 0;

// 	for (size_t j = 0; j < size; j++)
// 		toInsert.push_back(j + 1);
// 	while (i < size && jac <= size)
// 	{
// 		if (jac < lastJac) //Overflow protection
// 			throw OverflowException();

// 		for (size_t j = jac; j > lastJac; --j)
// 		{
// 			main.insert(std::lower_bound(main.begin(), main.begin() + jac + i - 1, pend[j - 1]), pend[j - 1]);
// 			toInsert.erase(toInsert.begin() + jac - 1 - i);
// 			i++;
// 		}
// 		lastLastJac = lastJac;
// 		lastJac = jac;
// 		jac = lastJac + 2*lastLastJac;
// 	}
// 	//add after jac
// 	for(std::vector<size_t>::const_reverse_iterator it = toInsert.rbegin(); it != toInsert.rend(); it++)
// 	{
// 		main.insert(std::lower_bound(main.begin(), main.begin() + *it + i - 1, pend[*it - 1]), pend[*it - 1]);
// 		i++;
// 	}
// 	return (main);
// }

// template	<typename ForwardIterator>
// bool	isSorted(ForwardIterator begin, ForwardIterator end)
// {
// 	if (begin == end)
// 		return true;

// 	ForwardIterator	next = begin;
// 	while (++next != end)
// 	{
// 		if (*next < *begin)
// 			return false;
// 		++begin;
// 	}
// 	return true;
// }

// #endif

#ifndef MERGE_HPP
#define MERGE_HPP

#include <algorithm>
#include <sstream>
#include <sys/wait.h>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <deque>

class InvalidValueError : public std::exception
{
	public:
		const char* what(void) const throw();
};

void parseInput(char **av, std::vector<int> &vec, std::deque<int> &deq);

double elapsed(struct timeval begin, struct timeval	end);

template<typename T>
void printCont(T &cont)
{
	// std::cout << "Size = " << cont.size() << std::endl;

	for (typename T::iterator it = cont.begin(); it != cont.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename Iterator>
void printSpan(Iterator begin, Iterator end)
{
	std::cout << "[";
	for (Iterator it = begin; it != end; it++)
		std::cout << *it << " ";
	std::cout << "]" << std::endl;
}

template<typename T, typename Iterator>
void merge(T &cont, Iterator begin, Iterator mid, Iterator end)
{
	(void) cont;
	T rhs(begin, mid);
	T lhs(mid, end);
	Iterator insertPos = begin;
	Iterator leftIt = lhs.begin();
	Iterator rightIt = rhs.begin();

	while (leftIt != lhs.end() && rightIt != rhs.end())
	{
		if (*leftIt < *rightIt)
		{
			*insertPos = *leftIt;
			leftIt++;
			insertPos++;
			*insertPos = *leftIt;
			leftIt++;
		}
		else
		{
			*insertPos = *rightIt;
			rightIt++;
			insertPos++;
			*insertPos = *rightIt;
			rightIt++;
		}
		insertPos++;
	}
	while (leftIt != lhs.end())
	{
		*insertPos = *leftIt;
		leftIt++;
		insertPos++;
	}
	while (rightIt != rhs.end())
	{
		*insertPos = *rightIt;
		rightIt++;
		insertPos++;
	}
}

template<typename T, typename Iterator>
void mergeSort(T &cont, Iterator begin, Iterator end)
{
	if (std::distance(begin, end) < 3)
		return;
	int distance = std::distance(begin, end)/2;
	if (distance % 2 == 1)
		distance += 1;
	Iterator mid = std::next(begin, distance);
	mergeSort(cont, begin, mid);
	mergeSort(cont, mid, end);
	merge(cont, begin, mid, end);
}

template <typename Iterator>
void pairUp(Iterator begin, Iterator end)
{
	Iterator it = begin;

    while (it != end)
	{
		if (*it < *(std::next(it, 1)))
			std::swap(*it, *(std::next(it, 1)));
		it = std::next(it, 2);
	}
}

template <typename T>
void splitCont(T &cont, T&main, T&pend)
{
	typename T::iterator it = cont.begin();
	typename T::iterator ite = cont.end();

	for (; it != ite; it++)
	{
		if (std::distance(cont.begin(), it) % 2 == 0)
			main.push_back(*it);
		else
			pend.push_back(*it);
	}
}

template <typename T>
T getJNumber(T nb)
{
	if (nb == 0)
		return 0;
	else if (nb == 1)
		return 1;
	return (getJNumber(nb - 1) + 2 * getJNumber(nb - 2));
}

template <typename T>
void insert(T &main, T&pend)
{
	unsigned int maxSize = pend.size();
	unsigned int indexJ = 2;
	unsigned int jn = getJNumber(indexJ);
	unsigned int jn_1 = getJNumber(indexJ - 1);
	unsigned int jn_2 = getJNumber(indexJ - 2);

	typename T::iterator itPendStart = pend.begin();
	typename T::iterator itPendEnd = pend.begin();

	typename T::iterator itInsertPos = main.begin();

	unsigned int insertedAmount = 0;

	while (jn <= maxSize)
	{
		if (jn == 1)
		{
			main.insert(main.begin(), *itPendStart);
			insertedAmount++;
		}
		else
		{
			std::advance(itPendEnd, jn_1 - jn_2);
			std::advance(itPendStart, jn - jn_1);
			typename T::iterator tmpIt = itPendStart;
			while (tmpIt != itPendEnd)
			{
				unsigned int toAdvance = jn + insertedAmount + 1;
				//Really not optimal for lists as it goes through the whole list all the time.
				typename T::iterator itMainEnd = main.begin();
				if (toAdvance > main.size())
					itMainEnd = main.end();
				else
					std::advance(itMainEnd, toAdvance);
				itInsertPos = std::lower_bound(main.begin(), itMainEnd, *tmpIt);
				main.insert(itInsertPos, *tmpIt);
				insertedAmount++;
				tmpIt--;
			}
		}
		indexJ++;
		jn_2 = jn_1;
		jn_1 = jn;
		jn = getJNumber(indexJ);
	}
	if (++itPendStart != pend.end())
	{
		while (itPendStart != pend.end())
		{
			itInsertPos = std::lower_bound(main.begin(), main.end(), *itPendStart);
			main.insert(itInsertPos, *itPendStart);
			itPendStart++;
		}
	}
}

template<typename T>
T mergeInsert(T &cont)
{
	bool trailing = false;
	int trailingVal = 0;
	T main;
	T pend;

	if (cont.size() % 2 == 1)
	{
		trailingVal = cont.back();
		trailing = true;
		cont.pop_back();
	}
	pairUp(cont.begin(), cont.end());
	mergeSort(cont, cont.begin(), cont.end());
	splitCont(cont, main, pend);
	if (trailing == true)
		pend.push_back(trailingVal);
	insert(main, pend);
	return (main);
}

#endif
