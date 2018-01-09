/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 04:41:19 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat lala("Lala", 42);
	Bureaucrat lili("Lili", 2);

	Form form1("Fire a guy", 3, 5);
	std::cout << form1;
	Form form2("Buy new cofee maker", 15, 15);
	std::cout << form2;
	Form form3("Sold out company", 1, 1);
	std::cout << form3;
	std::cout << std::endl;
//	*******************************************************
	try
	{
		Form form4("Impossible task", 0, 0);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form form5("Impossible task", 151, 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
//	*******************************************************

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
		lili.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
//	*******************************************************

	try
	{
		form2.beSigned(lala);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form2;

	try
	{
		form2.beSigned(lili);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << form2;

	try
	{
		form2.beSigned(lili);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
