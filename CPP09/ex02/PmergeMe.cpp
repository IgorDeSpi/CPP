/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:46:42 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/10 10:10:06 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "PmergeMe.hpp"

// const char* OverflowException::what() const throw()
// {
// 	return ("Overflow");
// }

// std::vector<int>	FJAVector(std::vector<int> v)
// {
// 	std::vector<int>	pend;
// 	int					leftover = -1;

// 	if (v.size() % 2 == 1)
// 	{
// 		leftover = v[v.size() - 1];
// 		v.pop_back();
// 	}
// 	makePairs(v);
// 	orderPairs(v);
// 	pend = split(v, leftover);
// 	insert(v, pend);
// 	return (v);
// }

// std::deque<int> FJADeque(std::deque<int> d)
// {
// 	std::deque<int>	pend;
// 	int				leftover = -1;

// 	if (d.size() % 2 == 1)
// 	{
// 		leftover = d[d.size() - 1];
// 		d.pop_back();
// 	}
// 	makePairs(d);
// 	orderPairs(d);
// 	pend = split(d, leftover);
// 	insert(d, pend);
// 	return (d);
// }

// bool	isStringDigits(const std::string str)
// {
// 	for (size_t i = 0; i < str.size(); ++i)
// 	{
// 		if (!std::isdigit(str[i]))
// 			return false;
// 	}
// 	return true;
// }

// int	parsing(int argc, char **argv, std::vector<int> &v, std::deque<int> &d)
// {
// 	for (int i = 1; i < argc; ++i)
// 	{
// 		int					toInsert;
// 		std::stringstream	sVal(argv[i]);

// 		if (!isStringDigits(argv[i]))
// 		{
// 			std::cout << "Error: Bad Input" << std::endl;
// 			return (1);
// 		}
// 		sVal >> toInsert;
// 		if (sVal.fail() || toInsert < 0)
// 		{
// 			std::cout << "Error: Bad Input" << std::endl;
// 			return (1);
// 		}
// 		v.push_back(toInsert);
// 		d.push_back(toInsert);
// 	}
// 	return (0);
// }

#include "PmergeMe.hpp"

const char *InvalidValueError::what(void) const throw() {
    return ("Invalid Value Input");
}

double elapsed(struct timeval	begin, struct timeval	end) {
	long seconds = end.tv_sec - begin.tv_sec;
	long microseconds = end.tv_usec - begin.tv_usec;
    double elapsed = seconds*1e6 + microseconds;
	return (elapsed);
}

void parseInput(char **av, std::vector<int> &vec, std::deque<int> &deq) {
    for (unsigned int i = 1; av[i]; i++){

        int j = 0;
        while (av[i][j]) {
            if (!isdigit(av[i][j])) {
                throw InvalidValueError();
            }
            j++;
        }

        std::stringstream ss(av[i]);
        int val;


        ss >> val;
        if (ss.fail() || val < 0) {
            throw InvalidValueError();
        }
        vec.push_back(val);
        deq.push_back(val);
    }
}
