/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 01:17:21 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

template<typename T>
T const & max(T const & a, T const & b)
{
    return (a < b ? b : a);
}

template<typename T>
T const & min(T const & a, T const & b)
{
    return (a > b ? b : a);
}

template<typename T>
void swap(T & a, T & b)
{
    T tmp = b;
    b = a;
    a = tmp;
}




int main(int argc, char **argv)
{
    if (argc == 3)
    {
        std::cout << "String:" << std::endl;
        std::string str_a;
        std::string str_b;
        str_a.assign(argv[1]);
        str_b.assign(argv[2]);
        std::cout << "a = "<< str_a << " b = " << str_b << std::endl;
        swap(str_a, str_b);
        std::cout << "After swap : ";
        std::cout << "a = "<< str_a << " b = " << str_b << std::endl;
        std::cout << "Max = " << ::max(str_a, str_b) << std::endl;
        std::cout << "Min = " << ::min(str_a, str_b) << std::endl;
        std::cout << std::endl;

        std::cout << "Int:" << std::endl;
        int int_a = std::atoi(argv[1]);
        int int_b = std::atoi(argv[2]);
        std::cout << "a = "<< int_a << " b = " << int_b << std::endl;
        swap(int_a, int_b);
        std::cout << "After swap : ";
        std::cout << "a = "<< int_a << " b = " << int_b << std::endl;
        std::cout << "Max = " << max(int_a, int_b) << std::endl;
        std::cout << "Min = " << min(int_a, int_b) << std::endl;
        std::cout << std::endl;

        std::cout << "Char:" << std::endl;
        int char_a = *argv[1];
        int char_b = *argv[2];
        std::cout << "a = "<< char_a << " b = " << char_b << std::endl;
        swap(char_a, char_b);
        std::cout << "After swap : ";
        std::cout << "a = "<< char_a << " b = " << char_b << std::endl;
        std::cout << "Max = " << max(char_a, char_b) << std::endl;
        std::cout << "Min = " << min(char_a, char_b) << std::endl;
    }
    return 0;
}
