/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:09:20 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/26 10:44:59 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <unistd.h>

int main()
{
	Bureaucrat test("Test 1", 1); // HIGH LEVEL

	std::cout << test << std::endl;

	Bureaucrat test2("Test 2", 200); // LOW LEVEL

	std::cout << test2 << std::endl;

	test2.gradeDecrement();

	std::cout << test2 << std::endl;

	test.gradeDecrement();

	Bureaucrat test3(test); // HIGH LEVEL

	std::cout << test3 << std::endl;

	std::cout << "###########################################" << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	test3.gradeDecrement();

	std::cout << test3 << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	test3.gradeIncrement();

	std::cout << test3 << std::endl;

	std::cout << "###########################################" << std::endl;

{
	PresidentialPardonForm form1("High Form");
	std::cout << form1 << std::endl;

	RobotomyRequestForm form2("Low Form");
	std::cout << form2 << std::endl;

	ShrubberyCreationForm form3("Extra Low Form");
	std::cout << form3 << std::endl;

	form2.execute(test3);
	test3.signForm(form2);
	test3.execForm(form2);

	std::cout << "###########################################" << std::endl;

	form1.execute(test3);
	test3.execForm(form1);
	test3.signForm(form1);
	test3.execForm(form1);
	test2.execForm(form1);
	form1.execute(test3);

	std::cout << "###########################################" << std::endl;

	test3.execForm(form2);
	test2.signForm(form3);
	test3.signForm(form3);
	test3.execForm(form3);
	test2.execForm(form3);
}
	return (0);
}
