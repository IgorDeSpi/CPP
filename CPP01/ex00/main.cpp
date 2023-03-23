/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:55:19 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/23 11:56:41 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1 = newZombie("Cristiano");
	zombie1->annonce();

	randomChump("Ronaldo");
	delete zombie1;
}
