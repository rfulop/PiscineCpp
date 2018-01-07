/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 14:30:11 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap & cp);
    ClapTrap & operator=(const ClapTrap & rhs);

    void setName(std::string name);
    std::string getName(void) const;
    int getHitPoints(void) const;
    int getMaxHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getMaxEnergyPoints(void) const;
    int getLevel(void) const;
    int getMeleeAttack(void) const;
    int getRangedAttack(void) const;
    int getArmorReduction(void) const;

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string _name;
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergyPoints;
    int _level;
    int _meleeAttack;
    int _rangedAttack;
    int _armorReduction;
};

#endif
