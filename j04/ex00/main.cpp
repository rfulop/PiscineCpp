/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:17:48 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    std::cout << "---- Initialization ----" << std::endl;
    Sorcerer roger("Roger", "The best");
    Victim lala("Lala");
    Peon peon("Peon n°4242");

    std::cout << std::endl << "---- Introduction ----" << std::endl;
    std::cout << roger;
    std::cout << lala;
    std::cout << peon;

    std::cout << std::endl << "---- Polymorphing ----" << std::endl;
    roger.polymorph(lala);
    roger.polymorph(peon);

    std::cout << std::endl << "---- Destruction ----" << std::endl;

    return 0;
}
