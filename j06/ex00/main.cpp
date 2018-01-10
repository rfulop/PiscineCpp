/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 09:39:52 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConv.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ScalarConv param(argv[1]);
		std::cout << "char: ";
		try
		{
			std::cout << "\'" << static_cast<char>(param) << "\'" << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Non displayable" << std::endl;
		}
		std::cout << "int: ";
		try
		{
			std::cout << static_cast<int>(param) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Non displayable" << std::endl;
		}
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << "float: ";
		try
		{
			std::cout << static_cast<float>(param) << "f" << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Non displayable" << std::endl;
		}
		std::cout << "double: ";
		try
		{
			std::cout << static_cast<double>(param) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Non displayable" << std::endl;
		}
	}
	return 0;
}
