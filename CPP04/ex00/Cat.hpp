/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:29:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 17:54:16 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Dog.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(Cat const &obj);
		virtual	~Cat();
		Cat	&operator=(Cat const &obj);

		void	makeSound(void) const;
};

#endif
