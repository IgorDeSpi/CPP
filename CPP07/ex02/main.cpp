/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:05:17 by ide-spir          #+#    #+#             */
/*   Updated: 2023/08/01 14:46:36 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	{
		int * a = new int();
		std::cout << "a = " << *a << std::endl;
		delete a;
	}
	std::cout << "#########################################################" << std::endl;
	{
		Array<int> tint(0);
		std::cout << "tint size = " << tint.size() << std::endl;
	}
	std::cout << "#########################################################" << std::endl;
	{
		try
		{
			Array<int> tint(4);
			tint[0] = 1;
			tint[1] = 2;
			tint[2] = 3;
			tint[3] = 4;
			const Array<int> test(tint);
			std::cout << test << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "#########################################################" << std::endl;
	{
		try
		{
			Array<int> tint(1);
			tint[-4] = 23;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "#########################################################" << std::endl;
	try
	{
		Array<int> tint(42);
		Array<char> tchar(42);
		Array<std::string> tstr(42);
		Array<bool> tbool(42);

		std::cout << "tint size = " << tint.size() << std::endl;
		std::cout << "tchar size = " << tchar.size() << std::endl;
		std::cout << "tstr size = " << tstr.size() << std::endl;
		std::cout << "tbool sie = " << tbool.size() << std::endl;

		tint[4] = 23;
		tstr[4] = "Long long long str !";
		std::cout << "tint = " << tint[0] << std::endl;
		std::cout << "tstr = " << tstr[0] << std::endl;

		std::cout << "tint = " << tint[5] << std::endl;
		std::cout << "tstr = " << tstr[5] << std::endl;
		tint[5] = 24;
		tstr[5] = "Long long long str !";
		std::cout << "tint = " << tint[4] << std::endl;
		std::cout << "tstr = " << tstr[4] << std::endl;

		std::cout << "tint = " << tint[5] << std::endl;
		std::cout << "tstr = " << tstr[5] << std::endl;

		std::cout << "#########################################################" << std::endl;

		std::cout << "tbool[41] = " << tbool[41] << std::endl;
		tbool[41] = true;
		std::cout << "tbool[41] = " << tbool[41] << std::endl;

		std::cout << "#########################################################" << std::endl;

		Array<bool> tbool2(42);
		std::cout << "tbool2[41] = " << tbool2[41] << std::endl;
		tbool2 = tbool;
		Array<bool> tbool3(tbool);
		std::cout << "tbool[41] = " << tbool[41] << std::endl;
		std::cout << "tbool2[41] = " << tbool2[41] << std::endl;
		std::cout << "tbool3[41] = " << tbool3[41] << std::endl;
		tbool2[41] = false;
		std::cout << "tbool[41] = " << tbool[41] << std::endl;
		std::cout << "tbool2[41] = " << tbool2[41] << std::endl;
		std::cout << "tbool3[41] = " << tbool3[41] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
