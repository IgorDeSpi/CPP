/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:12:43 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/14 10:48:17 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongAnimal.hpp"

int	main()
{
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

	Animal	*group[20];

	for (int i = 0; i < 10; i++)
		group[i] = new Dog();

	for (int i = 10; i < 20; i++)
		group[i] = new Cat();

	for (int i = 0; i < 20; i++)
		group[i]->makeSound();

	for (int i = 0; i < 20; i++)
		delete group[i];

	delete i;
	delete j; //Should not create a leak

	std::cout << "############################################" << std::endl;

	Cat	test;
	test.printIdea(0);
	test.setIdea("Ready, Everyone? Now, Think Goose!", 0);
	test.makeSound();
	test.printIdea(0);
	Cat	test2;
	test2.makeSound();
	test2.printIdea(0);
	test2.setIdea("You Really Did Quite Well For A Beginner.", 0);
	test2.printIdea(0);
	test.printIdea(0);
	Cat	Z(test);
	Z.printIdea(0);

	std::cout << "############################################" << std::endl;

	Animal	*test1 = new Cat;
	test1->makeSound();

	delete test1;

	std::cout << "############################################" << std::endl;

	Animal	atest("Unicorn");
	atest.makeSound();

	return 0;
}
