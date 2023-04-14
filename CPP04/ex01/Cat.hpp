/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:11:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/13 10:28:20 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Dog.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(Cat const &obj);
		virtual	~Cat();
		Cat	&operator=(Cat const &obj);

		void	makeSound(void) const;

		Brain	*getBrain() const;

		void	setIdea(std::string const &ideas, int const &idea);
		void	printIdea(int const &idea) const;
};

#endif
