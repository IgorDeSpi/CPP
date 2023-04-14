/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:38 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:23:51 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Dog.hpp"

class Cat : public AAnimal
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
