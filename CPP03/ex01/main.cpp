/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:14:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/12 12:20:45 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap scav("Pierre");

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

	scav.setEnergyPoints(10);
	scav.attack("Victim 3");
	scav.takeDamage(30);
	scav.takeDamage(20);
	scav.takeDamage(10);
	scav.setHitPoints(10);
	std::cout << scav <<"'s HitPoints reset to 10 Hit Points" << std::endl;
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();


	ScavTrap scav2(scav);
	scav2.attack("Victim 1");
	scav2.takeDamage(5);
	scav2.beRepaired(5);
	scav2.guardGate();

	ClapTrap scav3("Paul");
	scav3 = scav;
	scav3.attack("Victim 4");
	scav3.takeDamage(5);
	scav3.beRepaired(5);

	return 0;
}
