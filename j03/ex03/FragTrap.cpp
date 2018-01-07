/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:13:19 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
ClapTrap()
{
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_meleeAttack = 30;
    this->_rangedAttack = 20;
    this->_armorReduction = 5;
    this->_name = "No name defined";
    std::cout << "FR4G-TP " << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap(std::string name) :
ClapTrap(name)
{
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_meleeAttack = 30;
    this->_rangedAttack = 20;
    this->_armorReduction = 5;
    std::cout << "FR4G-TP " << this->_name << " is created." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP " << this->_name << " is dead." << std::endl;
}

FragTrap::FragTrap(const FragTrap & cp) : ClapTrap(cp)
{
    std::cout << "Copy in progress.." << std::endl;
    *this = cp;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
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
    std::cout << "FR4G-TP " << this->_name << " has been reconstructed." << std::endl;
    return *this;
}

void FragTrap::rangedAttack(std::string const & target) const
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at ranged, causing " << this->_rangedAttack << " points of damage !"
    << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) const
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at melee, causing " << this->_meleeAttack << " points of damage !"
    << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    const std::string specialAttack[] = {" uses a sniper and hit the head of ", " piss on ", " insults in Korean the grandmother of ", " download a martial art program, imitate Bruce Lee and head kick ", " shows a picture of his girlfriend to distract "};

    if (this->_energyPoints < 25)
        std::cout << this->_name << " has not enouth energy for use a special attack :("
        << std::endl;
    else
    {
        this->_energyPoints -= 25;
        if (this->_energyPoints < 0)
            this->_energyPoints = 0;
        std::cout << this->_name << " " << specialAttack[rand() % 5] << target
        << ", and has now " << this->_energyPoints << " points of energy."
        << std::endl;
    }
}
