/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:28:48 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 14:55:31 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &obj);
		virtual ~Animal();
		Animal &operator=(Animal const &obj);

		void	setType(std::string const &type);

		const std::string	&getType() const;

		virtual void	makeSound(void) const;
};

#endif
