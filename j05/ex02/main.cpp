/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 10:13:15 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	srand(time(NULL));
	Bureaucrat lili("Lili", 2);

	ShrubberyCreationForm form1("Drawing");
	std::cout << form1;
	RobotomyRequestForm form2("A random guy who was going through");
	std::cout << form2;
	PresidentialPardonForm form3("Nobody");
	std::cout << form3;
	std::cout << std::endl;
//	*******************************************************

	Bureaucrat lala("Lala", 140);
	std::cout << lala;
	try
	{
		lala.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	while (lala.getGrade() > form1.getSignRequiredGrade())
		++lala;
	std::cout << lala;
	try
	{
		lala.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		lala.executeForm(form1);
		std::string fileName = form1.getTarget() + "_shrubbery";
		std::ifstream file;
		file.open(fileName.c_str(), std::fstream::out);
		std::cout << file.rdbuf();

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	ShrubberyCreationForm form4 = form1;
	std::cout << form4;
	lala.executeForm(form4);
	try
	{
		form4.execute(lala);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	//	*******************************************************

	try
	{
		lala.signForm(form2);
		lala.executeForm(form2);
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
		lili.signForm(form2);
		lili.executeForm(form2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//	*******************************************************

	try
	{
		form3.beSigned(lili);
		form3.execute(lili);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
