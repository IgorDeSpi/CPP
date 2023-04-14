/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:06 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:29:23 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &obj);
		virtual	~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &obj);

		void	setType(std::string const &type);

		const std::string	&getType() const;

		void	makeSound(void) const;
};

# endif
