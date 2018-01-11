/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 05:33:00 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int main(void)
{
    std::list<int>::iterator i;
    std::list<int> lst;

    lst.push_back(30);
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(40);

    std::cout << "List :" << std::endl;
    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
        std::cout << "- " << *i << " ";
    std::cout << std::endl;
    try
    {
        int a = 20;
        std::cout << "Try find " << a << std::endl;
        i = easyfind(lst, a);
        std::cout << *i << " found." << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Nothing's found."<< std::endl;
    }
    
    try
    {
        int a = 50;
        std::cout << "Try find " << a << std::endl;
        i = easyfind(lst, a);
        std::cout << *i << " found." << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Nothing's found."<< std::endl;
    }

    return 0;
}
