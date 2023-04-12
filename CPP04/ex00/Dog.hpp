/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:29:27 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 17:56:01 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(Dog const &obj);
		virtual	~Dog();
		Dog	&operator=(Dog const &obj);

		void	makeSound(void) const;
};

#endif
