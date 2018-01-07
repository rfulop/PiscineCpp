/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 15:12:44 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) :
ClapTrap()
{
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttack = 60;
    this->_rangedAttack = 5;
    this->_armorReduction = 0;
    this->_name = "No name defined";
    std::cout << "NINJ4-TP " << this->_name << " is created." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
ClapTrap(name)
{
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_meleeAttack = 60;
    this->_rangedAttack = 5;
    this->_armorReduction = 0;
    std::cout << "NINJ4-TP " << this->_name << " is created." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "NINJ4-TP " << this->_name << " is dead." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & cp) : ClapTrap(cp)
{
    std::cout << "Copy in progress.." << std::endl;
    *this = cp;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & rhs)
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
    std::cout << "NINJ4-TP " << this->_name << " has been reconstructed." << std::endl;
}

void NinjaTrap::rangedAttack(std::string const & target) const
{
    std::cout << "NINJ4-TP " << this->_name << " attacks " << target
    << " at ranged, causing " << this->_rangedAttack << " points of damage !"
    << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) const
{
    std::cout << "NINJ4-TP " << this->_name << " attacks " << target
    << " at melee, causing " << this->_meleeAttack << " points of damage !"
    << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target) const
{
    std::cout << this->_name << " sees a FR4G-TP, " << target.getName() << " , and jump next to him to press the off button."
    << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target) const
{
    std::cout << this->_name << " sees a FC4V-TP, " << target.getName() << " , prepare a mental attack to implode him."
    << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target) const
{
    std::cout << this->_name << " sees a NINJ4-TP, " << target.getName() << " , a martial art film is about to happen."
    << std::endl;
}
