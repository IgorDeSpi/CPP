/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:55:19 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/21 14:19:16 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1 = newZombie("Cristiano");
	zombie1->annonce();

	randomChump("Ronaldo");
	randomChump("7");
	randomChump("6");
	randomChump("5");
	randomChump("4");
	randomChump("3");
	randomChump("2");
	randomChump("1");
	randomChump("0");
	randomChump("-1");
	randomChump("-2");
	delete zombie1;
}
