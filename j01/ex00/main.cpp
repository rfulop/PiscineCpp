/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 01:57:12 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 01:57:14 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony *ponyOnTheHeap(std::string name)
{
    std::cout << "On the heap : ";
    Pony *new_pony = new Pony(name);

    std::cout << "End of function" << std::endl;
    return new_pony;
}

void ponyOnTheStack(std::string name)
{
    std::cout << "On the stack : ";
    Pony lala = Pony(name);
    std::cout << "End of function" << std::endl;
}

int main(void)
{
    ponyOnTheStack("Lili");
    std::cout << std::endl;

    Pony *pony1 = ponyOnTheHeap("Lala");
    delete pony1;
    std::cout << std::endl;

    Pony *pony2 = ponyOnTheHeap("Lulu");

	(void)pony2;
    return (0);
}
