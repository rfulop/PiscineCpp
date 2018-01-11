/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 10:04:04 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <stack>
#include "MutantStack.hpp"

template<typename T>
void print_stack(MutantStack<T> mstack)
{
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << std::endl << "MutantStack = ";
    while (it != ite)
    {
        std::cout << *it << " - ";
        ++it;
    }
    std::cout << std::endl;
}

int main()
{
    MutantStack<int> mstack;
    print_stack<int>(mstack);
    mstack.push(5);
    print_stack<int>(mstack);
    mstack.push(17);
    print_stack<int>(mstack);

    std::stack<int> s1(mstack);
    std::cout << "Stack = ";
    while(!s1.empty())
    {
        int w = s1.top();
        std::cout << w << " - ";
        s1.pop();
    }
    std::cout << std::endl;

    std::cout << "Top = " << mstack.top() << std::endl;

    mstack.pop();
    print_stack<int>(mstack);

    std::cout << "Stack size = " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(42);
    mstack.push(42);

    print_stack<int>(mstack);
    std::cout << std::endl;
    std::stack<int> s2(mstack);
    std::cout << "Stack = ";
    while(!s2.empty())
    {
        int w = s2.top();
        std::cout << w << " - ";
        s2.pop();
    }
    std::cout << std::endl;

    return 0;
}
