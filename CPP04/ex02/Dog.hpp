/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:10 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:24:35 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class	Dog : public AAnimal
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
