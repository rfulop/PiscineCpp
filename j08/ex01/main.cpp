/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 07:48:02 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
#include "Span.hpp"
#include <sstream>

int main()
{
    int generateN;
	std::string input;
    int maxUpper;

	while(true)
    {
		std::cout << "How many number do you want to generate ?" << std::endl;
		getline(std::cin, input);
		std::stringstream ss(input);
		if(ss >> generateN && !(ss >> input))
            break ;
		std::cin.clear();
        std::cerr << "Invalid input. Please try again." << std::endl;
	}
    Span sp = Span(generateN);

    char c;
    do
    {
        std::cout << "Do you want to print the generate list ? ";
        std::cin >> c;
        std::cin.ignore(80, '\n');
        std::cout << std::endl;
    } while (c != 'y' && c != 'n');

    while(true)
    {
        std::cout << "Enter upper bound : ";
        getline(std::cin, input);
        std::stringstream ss(input);
        if(ss >> maxUpper && !(ss >> input))
            break ;
        std::cin.clear();
        std::cerr << "Invalid input. Please try again." << std::endl;
    }

    srand(time(NULL));
    for (int i = 0; i < generateN; ++i)
    {
        int n = rand() % maxUpper;
        sp.addNumber(n);
        if (c == 'y')
            std::cout << "- " << n << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "ShortestSpan = " << sp.shortestSpan() << std::endl;
    std::cout << "LongestSpan = " << sp.longestSpan() << std::endl;


    std::cout << std::endl << std::endl;
    std::cout << "addNumber test :" << std::endl;
    int size;
    while(true)
    {
        std::cout << "Enter a size: ";
        getline(std::cin, input);
        std::stringstream ss(input);
        if(ss >> size && !(ss >> input))
            break ;
        std::cin.clear();
        std::cerr << "Invalid input. Please try again." << std::endl;
    }
    Span span2(size);
    for (int i = 0; i < size + 1; ++i)
    {
        try
        {
            span2.addNumber(42);
            std::cout << i << "- Adding a number" << std::endl;
        }
        catch (std::exception & e)
        {
            std::cout << "Not enought capacity for add another number." << std::endl;
        }
    }
    return 0;
}
