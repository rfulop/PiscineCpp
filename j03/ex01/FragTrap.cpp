/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 14:03:49 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttack(30), _rangedAttack(20), _armorReduction(5)
{
    this->_name = "No name defined";
    std::cout << this->_name << " is created." << std::endl;
}

FragTrap::FragTrap(std::string name) :
_hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _meleeAttack(30), _rangedAttack(20), _armorReduction(5)
{
    this->_name = name;
    std::cout << this->_name << " is created." << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << this->_name << " is dead." << std::endl;
}

FragTrap::FragTrap(const FragTrap & cp)
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
    std::cout << this->_name << " has been reconstructed." << std::endl;
}

void FragTrap::setName(std::string name)
{
    std::cout << this->_name << " is now " << name << "." << std::endl;
    this->_name = name;
}

std::string FragTrap::getName(void) const { return this->_name; }
int FragTrap::getHitPoints(void) const { return this->_hitPoints; }
int FragTrap::getMaxHitPoints(void) const { return this->_maxHitPoints; }
int FragTrap::getEnergyPoints(void) const { return this->_energyPoints; }
int FragTrap::getMaxEnergyPoints(void) const { return this->_maxEnergyPoints; }
int FragTrap::getLevel(void) const { return this->_level; }
int FragTrap::getMeleeAttack(void) const { return this->_meleeAttack; }
int FragTrap::getRangedAttack(void) const { return this->_rangedAttack; }
int FragTrap::getArmorReduction(void) const { return this->_armorReduction; }

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at ranged, causing " << this->_rangedAttack << " points of damage !"
    << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
    << " at melee, causing " << this->_meleeAttack << " points of damage !"
    << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (!this->_energyPoints)
        std::cout << this->_name << " is already dead." << std::endl;
    else
    {
        if (amount - this->_armorReduction > this->_maxHitPoints)
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

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == this->_maxEnergyPoints)
        std::cout << this->_name << " is already full life." << std::endl;
    else
    {
        if (amount + this->_energyPoints > this->_maxEnergyPoints)
            this->_energyPoints = this->_maxEnergyPoints;
        else
            this->_energyPoints += amount;
        std::cout << this->_name << " thas been repared and recover " << amount
        << " points of energy and have now " << this->_energyPoints << " points of energy."
        << std::endl;
    }
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
