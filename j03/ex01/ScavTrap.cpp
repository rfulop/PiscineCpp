/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 21:21:04 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :
_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttack(20), _rangedAttack(15), _armorReduction(3)
{
    this->_name = "No name defined";
    std::cout << this->_name << " is waiting a bro for combat." << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _meleeAttack(20), _rangedAttack(15), _armorReduction(3)
{
    this->_name = name;
    std::cout << this->_name << " is waiting a bro for combat." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << this->_name << " is resting." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & cp)
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
    std::cout << this->_name << " has been reconstructed." << std::endl;
	return *this;
}

void ScavTrap::setName(std::string name)
{
    std::cout << this->_name << " is now " << name << "." << std::endl;
    this->_name = name;
}

std::string ScavTrap::getName(void) const { return this->_name; }
int ScavTrap::getHitPoints(void) const { return this->_hitPoints; }
int ScavTrap::getMaxHitPoints(void) const { return this->_maxHitPoints; }
int ScavTrap::getEnergyPoints(void) const { return this->_energyPoints; }
int ScavTrap::getMaxEnergyPoints(void) const { return this->_maxEnergyPoints; }
int ScavTrap::getLevel(void) const { return this->_level; }
int ScavTrap::getMeleeAttack(void) const { return this->_meleeAttack; }
int ScavTrap::getRangedAttack(void) const { return this->_rangedAttack; }
int ScavTrap::getArmorReduction(void) const { return this->_armorReduction; }

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_name << " try to attack " << target
    << " at ranged, causing " << this->_rangedAttack << " points of damage !"
    << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_name << " try to attack " << target
    << " at melee, causing " << this->_meleeAttack << " points of damage !"
    << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (!this->_energyPoints)
        std::cout << this->_name << " is already dead. (Again..)" << std::endl;
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

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == this->_maxEnergyPoints)
        std::cout << this->_name << " is already full life. (How can it be ?!)" << std::endl;
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
