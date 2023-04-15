/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:47:32 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:26:09 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
	private:
		AMateria();

	protected:
		std::string	type;

	public:
		AMateria(const AMateria& other);
		AMateria(const std::string& type);
		virtual ~AMateria() {};

		AMateria&	operator=(const AMateria& other);

		const std::string&	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target) = 0;
};

#endif
