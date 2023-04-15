/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:47:49 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:29:53 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	private:

	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		Cure&	operator=(const Cure& other);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
};

#endif
