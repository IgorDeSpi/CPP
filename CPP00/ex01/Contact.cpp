/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:41:02 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/15 16:34:11 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

void	Contact::add_FirstName()
{
	while (m_firstName.empty())
	{
		std::cout << "Enter the contact's first name : ";
		getline(std::cin, m_firstName);
		std::cout << "\n";
	}
	return ;
}

void	Contact::add_LastName()
{
	while (m_lastName.empty())
	{
		std::cout << "Enter the contact's last name : ";
		getline(std::cin, m_lastName);
		std::cout << "\n";
	}
	return ;
}

void	Contact::add_NickName()
{
	while (m_nickName.empty())
	{
		std::cout << "Enter the contact's nickname : ";
		getline(std::cin, m_nickName);
		std::cout << "\n";
	}
	return ;
}

void	Contact::add_PhoneNumber()
{
	while (m_phoneNumber.empty())
	{
		std::cout << "Enter the contact's phone number : ";
		getline(std::cin, m_phoneNumber);
		std::cout << "\n";
	}
	return ;
}

void	Contact::add_DarkSecret()
{
	while (m_darkSecret.empty())
	{
		std::cout << "Enter the contact's darkest secret : ";
		getline(std::cin, m_darkSecret);
		std::cout << "\n";
	}
	return ;
}

void	Contact::show_FirstName() const
{
	if (m_firstName.length() > 10)
	{
		std::cout << m_firstName.substr(0, 9) << ".";
	}
	else
	{
		int	len = 10 - m_firstName.length();
		for (int i(0); i < len; i++)
		{
			std::cout << " ";
		}
		std::cout << m_firstName;
	}
}

void	Contact::show_LastName() const
{
	if (m_lastName.length() > 10)
	{
		std::cout << m_lastName.substr(0, 9) << ".";
	}
	else
	{
		int	len = 10 - m_lastName.length();
		for (int i(0); i < len; i++)
		{
			std::cout << " ";
		}
		std::cout << m_lastName;
	}
}

void	Contact::show_NickName() const
{
	if (m_nickName.length() > 10)
	{
		std::cout << m_nickName.substr(0, 9) << ".";
	}
	else
	{
		int	len = 10 - m_nickName.length();
		for (int i(0); i < len; i++)
		{
			std::cout << " ";
		}
		std::cout << m_nickName;
	}
}
