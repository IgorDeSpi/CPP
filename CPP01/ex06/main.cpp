/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:14:57 by ide-spir          #+#    #+#             */
/*   Updated: 2023/03/31 14:51:02 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	if (ac != 2)
	{
		std::cout << "Harl only need one level" << std::endl;
		return (1);
	}
	std::string level = av[1];

	harl.complain(level);

	return(0);
}
