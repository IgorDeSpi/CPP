/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:48:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:29:48 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	private:

	public:
		Ice();
		Ice(const Ice& other);
		~Ice();

		Ice&	operator=(const Ice& other);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
};

#endif
