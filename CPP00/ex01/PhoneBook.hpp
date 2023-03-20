/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:58:01 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/20 15:15:34 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		int		index;
		int		nbr_of_contact;
		Contact	_contact[8];

	public:
		PhoneBook();
		~PhoneBook();
		int		push_contact(Contact contact);
		int		display_list(int nbr_contact) const;
		void	display_contact(int index) const;
		int		current_index() const;
		int		contact_nbr() const;
};

#endif
