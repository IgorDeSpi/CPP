/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:21:22 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/23 14:46:41 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];
	std::string	new_name;

	for(int i = 0; i < N; i++)
	{
		std::ostringstream oss;
		oss << name << (i + 1);
		new_name = oss.str();
		horde[i].setname(new_name);
		new_name.erase();
		horde[i].annonce();
	}
	return (&(horde[0]));
}
