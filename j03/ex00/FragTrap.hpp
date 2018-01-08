/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 13:00:59 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    ~FragTrap(void);
    FragTrap(const FragTrap & cp);
    FragTrap & operator=(const FragTrap & rhs);

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

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

private:
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
