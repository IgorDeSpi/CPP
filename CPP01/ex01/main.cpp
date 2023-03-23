/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:21:36 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/23 14:51:58 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombiearmy = zombieHorde(5, "Cristiano ");
	std::cout << "Hello (said the first zombie)" << std::endl;
	zombiearmy->annonce();
	delete [] zombiearmy;
}
