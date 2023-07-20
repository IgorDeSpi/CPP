/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:13:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/07/20 11:36:26 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>
#include <deque>

#include <stdio.h>
#include <sys/time.h>

double	elapsed(struct timeval begin, struct timeval end)
{
	long	seconds = end.tv_sec - begin.tv_sec;
	long	microseconds = end.tv_usec - begin.tv_usec;
	double	elapsed = seconds*1e6 + microseconds;
	return (elapsed);
}

int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Error: " << "Usage: ./PmergeMe array_of_number(at least 2)" << std::endl;
		return (1);
	}
	std::vector<int>	v;
	std::vector<int>	vSorted;
	struct timeval		vBegin, vEnd;
	double				velapsed;
	std::deque<int>		d;
	std::deque<int>		dSorted;
	struct timeval		dBegin, dEnd;
	double				delapsed;

	struct timeval		pBegin, pEnd;
	double				pelapsed;

	gettimeofday(&pBegin, 0);
	if (parsing(argc, argv, v, d))
		return (1);
	gettimeofday(&pEnd, 0);
	pelapsed = elapsed(pBegin, pEnd);

	//Sort deque
	gettimeofday(&dBegin, 0);
	dSorted = FJADeque(d);
	gettimeofday(&dEnd, 0);
	delapsed = elapsed(dBegin, dEnd);

	//Sort vector
	gettimeofday(&vBegin, 0);
	vSorted = FJAVector(v);
	gettimeofday(&vEnd, 0);
	velapsed = elapsed(vBegin, vEnd);

	//Print
	std::cout << "Before : ";
	ft_print(d);
	std::cout << "After std::vector : ";
	ft_print(vSorted);
	std::cout << "After std::deque : ";
	ft_print(dSorted);

	std::cout << "Time elapsed for the parsing : " << pelapsed << " μs" << std::endl;
	std::cout << "Time elapsed for std::vector : " << velapsed << " μs" << std::endl;
	std::cout << "Time elapsed for std::deque : " << delapsed << " μs" << std::endl;
	std::cout << "Size before : " << d.size() << std::endl;
	std::cout << "Size std::vector : " << vSorted.size() << std::endl;
	std::cout << "Size std::deque : " << dSorted.size() << std::endl;
	std::cout << "Is std::vector sorted : " << isSorted(vSorted.begin(), vSorted.end()) << std::endl;
	std::cout << "Is std::deque sorted : " << isSorted(dSorted.begin(), dSorted.end()) << std::endl;
}
