/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:50:11 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/28 12:18:02 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(std::string name);
		HumanB(HumanB const &human);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
