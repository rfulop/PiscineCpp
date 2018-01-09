/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 10:52:12 by rfulop           ###   ########.fr       */
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

int main(void)
{
	srand(time(NULL));\
	Intern roger;

	Form *form0 = roger.makeForm("Pay increase", "roger");
	Form *form1 = roger.makeForm("shrubbery creation", "Drawing");
	Form *form2 = roger.makeForm("robotomy request", "A random guy who was going through");
	Form *form3 = roger.makeForm("presidential pardon", "Nobody");

	Bureaucrat lili("Lili", 2);
//	*******************************************************

	Bureaucrat lala("Lala", 140);
	std::cout << lala;
	try
	{
		lala.signForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	while (lala.getGrade() > form1->getSignRequiredGrade())
		++lala;
	std::cout << lala;
	try
	{
		lala.signForm(*form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		lala.executeForm(*form1);
		std::string fileName = form1->getTarget() + "_shrubbery";
		std::ifstream file;
		file.open(fileName.c_str(), std::fstream::out);
		std::cout << file.rdbuf();

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Form *form4 = form1;
	std::cout << *form4;
	lala.executeForm(*form4);
	try
	{
		form4->execute(lala);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	//	*******************************************************

	try
	{
		lala.signForm(*form2);
		lala.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//	*******************************************************

	std::cout << lili;
	try
	{
		lili.signForm(*form2);
		lili.executeForm(*form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//	*******************************************************

	try
	{
		form3->beSigned(lili);
		form3->execute(lili);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
