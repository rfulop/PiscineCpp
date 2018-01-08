/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 14:36:36 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
_hitPoints(100), _maxHitPoints(100), _level(1)
{
    this->_name = "No name defined";
    std::cout << "Introducting new fighter : " << this->_name <<  std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_hitPoints(100), _maxHitPoints(100), _level(1)
{
    this->_name = name;
    std::cout << "Introducting new fighter : " << this->_name <<  std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->_name << " is not fighting anymore." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & cp)
{
    std::cout << "Fighter copy in progress.." << std::endl;
    *this = cp;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
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
    std::cout << "Fighter" << this->_name << " has been reconstructed." << std::endl;
    return *this;
}

void ClapTrap::setName(std::string name)
{
    std::cout << this->_name << " is now " << name << "." << std::endl;
    this->_name = name;
}

std::string ClapTrap::getName(void) const { return this->_name; }
int ClapTrap::getHitPoints(void) const { return this->_hitPoints; }
int ClapTrap::getMaxHitPoints(void) const { return this->_maxHitPoints; }
int ClapTrap::getEnergyPoints(void) const { return this->_energyPoints; }
int ClapTrap::getMaxEnergyPoints(void) const { return this->_maxEnergyPoints; }
int ClapTrap::getLevel(void) const { return this->_level; }
int ClapTrap::getMeleeAttack(void) const { return this->_meleeAttack; }
int ClapTrap::getRangedAttack(void) const { return this->_rangedAttack; }
int ClapTrap::getArmorReduction(void) const { return this->_armorReduction; }

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->_energyPoints)
        std::cout << this->_name << " is already dead." << std::endl;
    else
    {
        if (amount - this->_armorReduction > (unsigned int)this->_maxHitPoints)
            this->_energyPoints -= this->_maxHitPoints;
        else
            this->_energyPoints -= amount - this->_armorReduction;
        if (this->_energyPoints < 0)
            this->_energyPoints = 0;
        std::cout << this->_name << " takes " << amount << " damages, reducted to "
        << amount - this->_armorReduction << " tanks to armor, and have now "
        << this->_energyPoints << " points of energy." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == this->_maxEnergyPoints)
        std::cout << this->_name << " is already full life." << std::endl;
    else
    {
        if (amount + this->_energyPoints > (unsigned int)this->_maxEnergyPoints)
            this->_energyPoints = this->_maxEnergyPoints;
        else
            this->_energyPoints += amount;
        std::cout << this->_name << " thas been repared and recover " << amount
        << " points of energy and have now " << this->_energyPoints << " points of energy."
        << std::endl;
    }
}
