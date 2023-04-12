/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:40:50 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 11:45:28 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		DiamondTrap();

	public:
		~DiamondTrap();
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &obj);
		DiamondTrap	&operator=(DiamondTrap const &obj);

		void	whoAmI();

		using	ScavTrap::attack;
};

#endif
