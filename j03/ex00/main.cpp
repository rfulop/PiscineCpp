/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 13:07:57 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

int main(void)
{
    srand(time(NULL));
    std::cout << "Robots initialization." << std::endl;

    std::cout << "Create first FRAG-TP." << std::endl;
    FragTrap lala("Lala");
    std::cout << "Create second FRAG-TP." << std::endl;
    FragTrap lulu(lala);
    lulu.setName("Lulu");
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    std::cout << "Fight :" << std::endl;

    for (int i = 0; i < 8; ++i)
    {
        lala.rangedAttack(lulu.getName());
        lulu.takeDamage(lala.getRangedAttack());
    std::cout << std::endl;
    }
    std::cout << "---------------------------------------" <<std::endl;

    lulu.beRepaired(lulu.getMaxEnergyPoints());
    lulu.beRepaired(lulu.getMaxEnergyPoints());
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    lala.meleeAttack(lulu.getName());
    lulu.takeDamage(lala.getMeleeAttack());
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    for (int i = 0; i < 5; ++i)
    {
        lala.vaulthunter_dot_exe(lulu.getName());
        lulu.takeDamage(40);
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------" <<std::endl;

    std::cout << "Leaving combat." << std::endl;
    return 0;
}
