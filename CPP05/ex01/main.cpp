/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:42:59 by ide-spir          #+#    #+#             */
/*   Updated: 2023/05/18 16:49:31 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	test("test1", 1);

	std::cout << test << std::endl;

	Bureaucrat	test2("test2", 200);

	std::cout << test2 << std::endl;

	test2.gradeDecrement();

	std::cout << test2 << std::endl;

	test2.gradeDecrement();

	Bureaucrat	test3(test);

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
		Form	form1("High Form", 1, 1);
		std::cout << form1 << std::endl;

		Form	form2("Low Form", 150, 150);
		std::cout << form2 << std::endl;

		Form	form3("Unavailable Form", 160, 0);
		std::cout << form3 << std::endl;

		std::cout << "###########################################" << std::endl;

		test2.signForm(form1); // LOW and HIGH Not OK
		std::cout << form1 << std::endl;

		std::cout << "###########################################" << std::endl;

		test3.signForm(form2); // HIGH and LOW OK
		std::cout << form2 << std::endl;

		std::cout << "###########################################" << std::endl;

		test2.signForm(form3);
		std::cout << form3 << std::endl;
	}
	std::cout << "###########################################" << std::endl;

	Form	form1("High Form", 1, 1);
	std::cout << form1 << std::endl;

	test3.signForm(form1);
	std::cout << form1 << std::endl;

	test3.signForm(form1);
	std::cout << form1 << std::endl;

	Form	form2("Another High Form", 1, 1);
	std::cout << form2 << std::endl;

	test2.signForm(form2);
	std::cout << form2 << std::endl;

	try
	{
		form1.beSigned(test3);
		std::cout << form1 << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << test3.getName() << " couldn't sign " << form1.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeUnavailbleException &e)
	{
		std::cerr << test3.getName() << " couldn't sign " << form1.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
	catch(Form::SignStatusException &e)
	{
		std::cerr << test3.getName() << " couldn't sign " << form1.getName() << " because ";
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
