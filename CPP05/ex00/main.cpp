/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:59:00 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/12 11:28:34 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	test("Test 1", 1);

	std::cout << test << std::endl;

	Bureaucrat	test2("Test 2", 200);

	std::cout << test2 << std::endl;

	test2.gradeDecrement();

	test2 = test;

	std::cout << test2 << std::endl;

	test2.gradeDecrement();

	Bureaucrat	test3(test2);

	std::cout << test3 << std::endl;

	std::cout << "##############################################" << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	test3.gradeDecrement();

	std::cout << test3 << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	return (0);
}
