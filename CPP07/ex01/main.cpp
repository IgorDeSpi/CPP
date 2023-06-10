/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:34:22 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/10 14:54:26 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void	incrementer(T &value)
{
	++value;
}

int	main()
{
	int	intArray[] = {1, 2, 3, 4, 5};
	int	intArraySize = sizeof(intArray) / sizeof(int);

	std::cout << "Integer array before using the iter function :" << std::endl;
	for (int i = 0; i < intArraySize; ++i)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	iter(intArray, intArraySize, incrementer);
	std::cout << "Integer array after using the iter function with incrementer :" << std::endl;
	for (int i = 0; i < intArraySize; ++i)
	{
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	iter(intArray, intArraySize, print);

	float	floatArray[] = {1.54f, 2.23f, 3.67f, 8.91f};
	int		floatArraySize = sizeof(floatArray) / sizeof(float);

	iter(floatArray, floatArraySize, print);

	return (0);
}
