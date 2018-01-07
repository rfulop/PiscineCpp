/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:16:27 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
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
    std::cout << std::endl;
    std::cout << "Leaving combat." << std::endl;
    std::cout << "---------------------------------------" <<std::endl;
    std::cout << std::endl;


    std::cout << "SC4V initialization." << std::endl;

    std::cout << "Create first SC4V-TP." << std::endl;
    ScavTrap jennifer("Jennifer");
    std::cout << "Create second SC4V-TP." << std::endl;
    ScavTrap chester(jennifer);
    chester.setName("Chester");
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    std::cout << "Fight :" << std::endl;

    for (int i = 0; i < 6; ++i)
    {
        chester.rangedAttack(jennifer.getName());
        jennifer.takeDamage(chester.getRangedAttack());
        std::cout << std::endl;
    }
    std::cout << "---------------------------------------" <<std::endl;

    jennifer.beRepaired(jennifer.getMaxEnergyPoints());
    jennifer.beRepaired(jennifer.getMaxEnergyPoints());
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    chester.meleeAttack(jennifer.getName());
    jennifer.takeDamage(chester.getMeleeAttack());
    std::cout << std::endl;
    std::cout << "---------------------------------------" <<std::endl;

    jennifer.beRepaired(jennifer.getMaxEnergyPoints());
    for (int i = 0; i < 3; ++i)
    {
        chester.challengeNewcomer(jennifer.getName());
        jennifer.takeDamage(40);
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Leaving combat." << std::endl;
    std::cout << "---------------------------------------" <<std::endl;
    std::cout << std::endl;


    std::cout << "NINJ4-TP initialization." << std::endl;

    std::cout << "Create first NINJ4-TP." << std::endl;
    NinjaTrap bruce("Bruce");
    std::cout << "Create second NINJ4-TP." << std::endl;
    NinjaTrap lee(bruce);
    lee.setName("Lee");
    std::cout << std::endl;

    bruce.ninjaShoebox(lee);
    bruce.ninjaShoebox(jennifer);
    bruce.ninjaShoebox(lala);

    std::cout << "---------------------------------------" <<std::endl;

    return 0;
}
