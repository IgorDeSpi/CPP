/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:53:35 by ide-spir          #+#    #+#             */
/*   Updated: 2023/06/07 16:16:14 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main(void)
{
	{
		Data	*launch = new Data;

		launch->str_value = "Str test - Amazing string save !";
		launch->int_value = -42;

		uintptr_t	utest = Serialization::serialize(launch);

		Data	*receive = Serialization::deserialize(utest);
		receive->getValues();

		delete launch;
	}
	{
		Data	launch;

		launch.str_value = "Str second test - Amazing string saved without new ? This performance is possible ?!";
		launch.int_value = 56;

		uintptr_t	utest = Serialization::serialize(&launch);

		Data	*receive = Serialization::deserialize(utest);
		receive->getValues();
	}
	return (0);
}
