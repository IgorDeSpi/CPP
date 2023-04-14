/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:12:39 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/13 10:14:32 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"

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
