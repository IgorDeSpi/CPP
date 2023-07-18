/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:57:50 by ide-spir          #+#    #+#             */
/*   Updated: 2023/07/18 12:22:43 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments." << std::endl;
		return (1);
	}
	if (std::strlen(argv[1]) <= 0)
	{
		std::cout << "Error: empty string." << std::endl;
		return (1);
	}
	RPN	rpn(argv[1]);
	if (rpn.getArgStatus() == false)
	{
		std::cout << "Error: bad input." << std::endl;
		return (1);
	}
	rpn.Reverse_Polish_Notation();
	return (0);
}
