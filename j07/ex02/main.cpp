/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 03:04:14 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Array.tpp"

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "You can add args for test Unsigned int constructor." << std::endl << std::endl;
    std::cout << "**** Int ****" << std::endl;
    std::cout << "Default constructor :" << std::endl;
    Array<int> int_array1;
    std::cout << "Size = " << int_array1.size() << std::endl;
    try
    {
        std::cout << int_array1[1] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Unsigned int constructor" << std::endl;
    Array<int> int_array2(argc - 1);
    std::cout << "Size = " << int_array2.size() << std::endl;
    for (unsigned int i = 0; i < int_array2.size(); ++i)
        int_array2[i] = std::atoi(argv[i + 1]);
    try
    {
        for (unsigned int i = 0; i < int_array2.size(); ++i)
            std::cout << int_array2[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
// ***********************************************************

    std::cout << "**** String ****" << std::endl;
    std::cout << "Default constructor :" << std::endl;
    Array<std::string> str_array1;
    std::cout << "Size = " << str_array1.size() << std::endl;
    try
    {
        std::cout << str_array1[1] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Unsigned int constructor" << std::endl;
    Array<std::string> str_array2(argc - 1);
    std::cout << "Size = " << str_array2.size() << std::endl;
    for (unsigned int i = 0; i < str_array2.size(); ++i)
        str_array2[i] = argv[i + 1];
    try
    {
        for (unsigned int i = 0; i < str_array2.size(); ++i)
            std::cout << str_array2[i] << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
