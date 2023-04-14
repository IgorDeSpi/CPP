/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:13:05 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/13 10:28:30 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(Dog const &obj);
		virtual	~Dog();
		Dog	&operator=(Dog const &obj);

		void	makeSound(void) const;

		Brain	*getBrain() const;

		void	setIdea(std::string const &ideas, int const &idea);
		void	printIdea(int const &idea) const;
};

#endif
