/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:00:45 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/21 10:12:45 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const AAnimal*	i = new Cat();
	const AAnimal*	j = new Dog();

	AAnimal	*group[20];

	for (int i = 0; i < 10; i++)
		group[i] = new Dog();

	for (int i = 10; i < 20; i++)
		group[i] = new Cat();

	for (int i = 0; i < 20; i++)
		group[i]->makeSound();

	for (int i = 0; i < 20; i++)
		delete group[i];

	delete j; //should not create a leak
	delete i;

	std::cout << "##################################" << std::endl;

	Cat test;
	test.printIdea(0);
	test.setIdea("< Ready, Everyone? Now, Think Goose! >", 0);
	test.makeSound();
	test.printIdea(0);
	Cat test2;
	test2 = test;
	test2.makeSound();
	test2.printIdea(0);
	test2.setIdea("< You Really Did Quite Well For A Beginner. >", 0);
	test2.printIdea(0);
	test.printIdea(0);
	Cat Z(test);
	Z.printIdea(0);

	std::cout << "#################################################" << std::endl;

	AAnimal *test1 = new Cat;
	test1->makeSound();

	delete test1;

	std::cout << "#################################################" << std::endl;

	// AAnimal atest("Unicorn");
	// atest.makeSound();

	return 0;
}
