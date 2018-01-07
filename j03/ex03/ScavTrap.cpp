/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:13:44 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
ClapTrap()
{
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttack = 20;
    this->_rangedAttack = 15;
    this->_armorReduction = 3;
    this->_name = "No name defined";
    std::cout << "SC4V-TP " << this->_name << " is waiting a bro for combat." << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
ClapTrap(name)
{
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_meleeAttack = 20;
    this->_rangedAttack = 15;
    this->_armorReduction = 3;
    std::cout << "SC4V-TP " << this->_name << " is waiting a bro for combat." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "SC4V-TP " << this->_name << " is resting." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & cp) : ClapTrap(cp)
{
    std::cout << "Copy in progress.." << std::endl;
    *this = cp;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_meleeAttack = rhs._meleeAttack;
    this->_rangedAttack = rhs._rangedAttack;
    this->_armorReduction = rhs._armorReduction;
    std::cout << "SC4V-TP " << this->_name << " has been reconstructed." << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " try to attack " << target
    << " at ranged, causing " << this->_rangedAttack << " points of damage !"
    << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " try to attack " << target
    << " at melee, causing " << this->_meleeAttack << " points of damage !"
    << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    const std::string challenge[] = {" role a spliff with 8 sheets, smoke it, and say something interesting", " spit out more than 5 meters", " listen Jul's last album, he means entierly", " write beautiful code in.. php", " make a sexist, racist and homophobic joke on the 42 Slack's general channel"};

    if (this->_energyPoints < 25)
        std::cout << this->_name << " has not enouth energy for find a new challenge :("
        << std::endl;
    else
    {
        this->_energyPoints -= 25;
        if (this->_energyPoints < 0)
            this->_energyPoints = 0;
        std::cout << this->_name << " ask " << target << " to"<< challenge[rand() % 5]
        << ", and has now " << this->_energyPoints << " points of energy."
        << std::endl;
    }
}
