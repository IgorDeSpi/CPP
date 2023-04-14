/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:58:54 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 11:34:17 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"

class AAnimal
{
	private:

	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &obj);
		virtual	~AAnimal();
		AAnimal	&operator=(AAnimal const &obj);

		void	setType(std::string const &type);

		const std::string	&getType() const;

		virtual void	makeSound(void) const = 0;

		virtual Brain	*getBrain() const = 0;

		virtual void	setIdea(std::string const &ideas, int const &idea) = 0;
		virtual void	printIdea(int const &idea) const = 0;
};

#endif
