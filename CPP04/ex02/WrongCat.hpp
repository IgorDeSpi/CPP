/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:58:59 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 14:32:35 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(WrongCat const &obj);
		virtual ~WrongCat();
		WrongCat &operator=(WrongCat const &obj);

		void	makeSound(void) const;
};

#endif
