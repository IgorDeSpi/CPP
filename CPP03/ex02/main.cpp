/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:14:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 12:19:17 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
	FragTrap scav("Pierre");

	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	scav.attack("Victim 1");
	while(scav.getEnergyPoints() > 0)
		scav.attack("Victim 2");
	scav.attack("Victim 3");
	scav.setEnergyPoints(2);
	std::cout << scav <<"'s EnergyPoints reset to 2 Energy Points" << std::endl;
	scav.takeDamage(5);
	scav.takeDamage(5);
	scav.takeDamage(5);
	scav.setHitPoints(10);
	std::cout << scav <<"'s HitPoints reset to 10 Hit Points" << std::endl;
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.highFivesGuys();
	// scav.guardGate();


	FragTrap scav2(scav);
	scav2.attack("Victim 1");
	scav2.takeDamage(5);
	scav2.beRepaired(5);
	scav2.highFivesGuys();

	ScavTrap scav3("Paul");
	scav3.attack("Victim 4");
	scav3.takeDamage(5);
	scav3.beRepaired(5);
	scav3.guardGate();
	// scav3.highFivesGuys();

	ClapTrap scav4("Jacques");
	// scav4.guardGate();
	// scav4.highFivesGuys();
	scav4 = scav;
	scav4.attack("Victim 4");
	scav4.takeDamage(5);
	scav4.beRepaired(5);
	// scav4.highFivesGuys();


	return 0;
}
