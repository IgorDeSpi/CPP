/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <narvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:48:09 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/15 16:32:07 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define KNOWN_SIZE	4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria**	known;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();

		MateriaSource&	operator=(const MateriaSource& other);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(const std::string& type);
};

#endif
