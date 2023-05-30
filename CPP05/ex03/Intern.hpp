/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:29:40 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/30 11:17:12 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"

class Intern
{
	private :

	public :
		Intern();
		Intern(Intern const &obj);
		~Intern();
		Intern	&operator=(Intern const &obj);

		AForm	*makeForm(std::string const form, std::string const target);
};

#endif
