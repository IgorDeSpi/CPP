/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:41:24 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/20 16:05:23 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string input;
	PhoneBook phonebook;

	while (true)
	{
		std::cout << "Please enter your command (ADD, SEARCH or EXIT)" << std::endl;
		if (!(std::getline(std::cin, input)))
			return (1);
		if (input == "ADD")
		{
			Contact contact;
			if (phonebook.push_contact(contact))
				return (1);
		}
		else if (input == "SEARCH")
		{
			if (!phonebook.display_list(phonebook.contact_nbr()))
			{
				std::cout << "Enter the index of the contact you want to search : " << std::endl;
				while (true)
				{
					if (!(std::getline(std::cin, input)))
						return (1);
					if (std::atoi(input.c_str()) <= 8 && std::atoi(input.c_str()) >= 1)
					{
						phonebook.display_contact(std::atoi(input.c_str()) - 1);
						break ;
					}
					else
						std::cout << "Wrong index value!!" << std::endl;
				}
			}
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command. Try again with ADD, SEARCH or EXIT." << std::endl;
	}
	return (0);
}
