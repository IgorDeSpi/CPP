/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:57:11 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/17 09:39:16 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("Pierre");

	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.attack("Victim");
	clap.setEnergyPoints(10);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.takeDamage(5);
	clap.setHitPoints(10);
	clap.takeDamage(5);
	clap.beRepaired(5);


	ClapTrap clap1("");

	clap1.attack("Victim");
	clap1.attack("");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.setAttackDamage(10);
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.attack("Victim");
	clap1.beRepaired(5);
	clap1.setEnergyPoints(10);
	clap1.takeDamage(12);
	clap1.takeDamage(5);
	clap1.beRepaired(5);
	clap1.takeDamage(5);
	clap1.setHitPoints(10);
	clap1.takeDamage(5);
	clap1.beRepaired(5);


	ClapTrap clap2("");
	clap2 = clap;
	clap.attack("Victim");

	return 0;
}
