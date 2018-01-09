/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 12:16:08 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main(void)
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 150);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 150);

	OfficeBlock ob;
	ob.setIntern(idiotOne);

	std::cout << "Test 1 :" << std::endl;
	try
	{
		ob.doBureaucracy("Pay increase", "roger");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
// **********************************************************

	std::cout << "Test 2 :" << std::endl;

	ob.setSigner(bob);
	try
	{
		ob.doBureaucracy("Pay increase", "roger");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
// **********************************************************

	std::cout << "Test 3 :" << std::endl;

	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("Pay increase", "roger");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
// **********************************************************

	std::cout << "Test 4 :" << std::endl;

	try
	{
		ob.doBureaucracy("shrubbery creation", "Drawing");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
// **********************************************************

	std::cout << "Test 5 :" << std::endl;

	ShrubberyCreationForm form1("Drawing");
	while (bob.getGrade() > form1.getSignRequiredGrade())
		++bob;
	try
	{
		ob.doBureaucracy("shrubbery creation", "Drawing");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
// **********************************************************

	std::cout << "Test 6 :" << std::endl;

	while (hermes.getGrade() > form1.getExecRequiredGrade())
		++hermes;
	try
	{
		ob.doBureaucracy("shrubbery creation", "Drawing");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
