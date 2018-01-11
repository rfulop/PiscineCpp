/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 01:46:25 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>

template<typename T>
void iter(T * array, size_t len, void (f)(T &))
{
    T *tmp = array;
    for (size_t i = 0; i < len; ++i)
        f(tmp[i]);
}

template<typename T>
void display(T & elem)
{
    std::cout << elem << std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        std::cout << "Int:" << std::endl;
        int int_arrray[argc - 1];
        for (int i = 1; i < argc; ++i)
            int_arrray[i - 1] = std::atoi(argv[i]);
        iter(int_arrray, argc - 1, display<int>);
        std::cout << std::endl;

        std::cout << "String :" << std::endl;
        std::string str_array[argc - 1];
        for (int i = 1; i < argc; ++i)
            str_array[i - 1].assign(argv[i]);
        ::iter(str_array, argc - 1, display<std::string>);
        std::cout << std::endl;
    }
    else
        std::cout << "Usage : ./iter elem1 [...] elemN" << std::endl;
    return 0;
}
