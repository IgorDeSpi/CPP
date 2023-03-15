/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:15:45 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/15 15:48:32 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact {
	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickName;
		std::string m_phoneNumber;
		std::string m_darkSecret;

	public:
		Contact();
		void add_FirstName();
		void add_LastName();
		void add_NickName();
		void add_PhoneNumber();
		void add_DarkSecret();
		void show_FirstName() const;
		void show_LastName() const;
		void show_NickName() const;
		void show_All() const;
		void clear();
};

#endif
