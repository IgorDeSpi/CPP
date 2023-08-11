/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:13:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/11 07:53:14 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PmergeMe.hpp"
// #include <vector>
// #include <deque>

// #include <stdio.h>
// #include <sys/time.h>

// double	elapsed(struct timeval begin, struct timeval end)
// {
// 	long	seconds = end.tv_sec - begin.tv_sec;
// 	long	microseconds = end.tv_usec - begin.tv_usec;
// 	double	elapsed = seconds*1e6 + microseconds;
// 	return (elapsed);
// }

// int	main(int argc, char **argv)
// {
// 	if (argc < 3)
// 	{
// 		std::cout << "Error: " << "Usage: ./PmergeMe array_of_number(at least 2)" << std::endl;
// 		return (1);
// 	}
// 	std::vector<int>	v;
// 	std::vector<int>	vSorted;
// 	struct timeval		vBegin, vEnd;
// 	double				velapsed;
// 	std::deque<int>		d;
// 	std::deque<int>		dSorted;
// 	struct timeval		dBegin, dEnd;
// 	double				delapsed;

// 	struct timeval		pBegin, pEnd;
// 	double				pelapsed;

// 	gettimeofday(&pBegin, 0);
// 	if (parsing(argc, argv, v, d))
// 		return (1);
// 	gettimeofday(&pEnd, 0);
// 	pelapsed = elapsed(pBegin, pEnd);

// 	//Sort deque
// 	gettimeofday(&dBegin, 0);
// 	dSorted = FJADeque(d);
// 	gettimeofday(&dEnd, 0);
// 	delapsed = elapsed(dBegin, dEnd);

// 	//Sort vector
// 	gettimeofday(&vBegin, 0);
// 	vSorted = FJAVector(v);
// 	gettimeofday(&vEnd, 0);
// 	velapsed = elapsed(vBegin, vEnd);

// 	//Print
// 	std::cout << "Before : ";
// 	ft_print(d);
// 	std::cout << "After std::vector : ";
// 	ft_print(vSorted);
// 	std::cout << "After std::deque : ";
// 	ft_print(dSorted);

// 	std::cout << "Time elapsed for the parsing : " << pelapsed << " μs" << std::endl;
// 	std::cout << "Time elapsed for std::vector : " << velapsed << " μs" << std::endl;
// 	std::cout << "Time elapsed for std::deque : " << delapsed << " μs" << std::endl;
// 	std::cout << "Size before : " << d.size() << std::endl;
// 	std::cout << "Size std::vector : " << vSorted.size() << std::endl;
// 	std::cout << "Size std::deque : " << dSorted.size() << std::endl;
// 	std::cout << "Is std::vector sorted : " << isSorted(vSorted.begin(), vSorted.end()) << std::endl;
// 	std::cout << "Is std::deque sorted : " << isSorted(dSorted.begin(), dSorted.end()) << std::endl;
// }
#include "PmergeMe.hpp"
#include <sys/time.h>

int main(int ac, char **av) {
	std::vector<int> vec, vecSorted;
	std::deque<int> deq, deqSorted;
	struct timeval vecBegin, vecEnd, deqBegin, deqEnd;
	struct timeval dataBegin, dataEnd;
	int nbrElements = 0;

	gettimeofday(&dataBegin, 0);
	try
	{
		if (ac < 2)
			throw InvalidValueError();
		parseInput(av, vec, deq);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	gettimeofday(&dataEnd, 0);

	std::cout << "Before: ";
	printCont(vec);

	gettimeofday(&deqBegin, 0);
	deqSorted =  mergeInsert(deq);
	gettimeofday(&deqEnd, 0);

	gettimeofday(&vecBegin, 0);
	vecSorted = mergeInsert(vec);
	gettimeofday(&vecEnd, 0);

	for (unsigned int i = 1; av[i]; i++)
		nbrElements++;
	// std::cout << "========================================================================================================================================================================" << std::endl;
	std::cout << "After: ";
	printCont(vecSorted);
	std::cout << std::endl << "Time to process Data " << elapsed(dataBegin, dataEnd) << " us" << std::endl << std::endl;
	// std::cout << "---DEQ---" << std::endl;
	std::cout << "Time to process a range of "<< nbrElements <<" elements with std::deque : " << elapsed(deqBegin, deqEnd) << " us" << std::endl;
	std::cout << "Time to process a range of " << nbrElements <<" elements with std::vector : " << elapsed(vecBegin, vecEnd) << " us" << std::endl;
	std::cout << std::endl;

	// std::cout << "---VEC---" << std::endl;
	std::cout << "Is deque sorted : " <<  std::is_sorted(deqSorted.begin(), deqSorted.end()) << std::endl;
	std::cout << "Is vector sorted : " <<  std::is_sorted(vecSorted.begin(), vecSorted.end()) << std::endl;

	return (0);
}
