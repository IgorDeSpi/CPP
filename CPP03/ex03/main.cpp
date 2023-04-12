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

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap scav("Pierre");

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

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	while(scav.getEnergyPoints() > 0)
		scav.attack("Victim 2");

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	scav.attack("Victim 3");
	scav.setEnergyPoints(10);
	std::cout << scav <<"'s EnergyPoints reset to 10 Energy Points" << std::endl;
	scav.takeDamage(5);
	scav.takeDamage(5);
	scav.takeDamage(5);
	scav.setHitPoints(10);
	std::cout << scav <<"'s HitPoints reset to 10 Hit Points" << std::endl;
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.highFivesGuys();
	scav.whoAmI();
	scav.guardGate();
	scav.guardGate();

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	DiamondTrap scav2(scav);
	scav.attack("Victim 1");
	scav.whoAmI();
	scav.guardGate();

	// std::cout << "###############################################" << std::endl;

	// ScavTrap scav1("Victim 1");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// scav1.attack("Nikita");
	// while(scav1.getEnergyPoints() > 0)
	// 	scav1.attack("Victim 2");
	// scav1.attack("Victim 3");
	// scav1.setEnergyPoints(10);
	// scav1.takeDamage(5);
	// scav1.takeDamage(5);
	// scav1.takeDamage(5);
	// scav1.setHitPoints(10);
	// scav1.takeDamage(5);
	// scav1.beRepaired(5);
	// scav1.guardGate();
	// scav1.guardGate();
	// // scav1.highFivesGuys();
	// // scav1.whoAmI();

	// std::cout << "###############################################" << std::endl;

	// FragTrap scav3;
	// scav3 = scav;
	// scav3.attack("Victim 1");
	// scav3.takeDamage(5);
	// scav3.beRepaired(5);
	// scav3.highFivesGuys();
	// // scav3.whoAmI();
	// // scav3.guardGate();

	// std::cout << "###############################################" << std::endl;

	// ScavTrap scav5("Yves-Jean");
	// scav5 = scav;
	// scav5.attack("Arthur");
	// scav5.takeDamage(5);
	// scav5.beRepaired(5);
	// // scav5.whoAmI();
	// scav5.guardGate();
	// // scav5.highFivesGuys();

	// std::cout << "###############################################" << std::endl;

	// ClapTrap scav6("Jean-Yves");
	// scav6 = scav;
	// scav6.attack("Arthur");
	// scav6.takeDamage(5);
	// scav6.beRepaired(5);
	// // scav5.whoAmI();
	// // scav6.guardGate();
	// // scav5.highFivesGuys();

	std::cout << "###############################################" << std::endl;
	return 0;
}
