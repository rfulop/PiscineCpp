/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 14:16:13 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
: _name(name)
{
    this->_ap = 40;
    this->_currentWeapon = NULL;
}

Character::Character(const Character & src)
{
    *this = src;
}

Character & Character::operator=(const Character & rhs)
{
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_currentWeapon = rhs._currentWeapon;
    return *this;
}

Character::~Character(void)
{
}

std::string Character::getName(void) const { return this->_name; }

int Character::getAP(void) const { return this->_ap; }

AWeapon *Character::getWeapon(void) const { return this->_currentWeapon; }

void Character::recoverAP(void)
{
    if (this->_ap != 40)
    {
        this->_ap += 10;
        if (this->_ap > 40)
            this->_ap = 40;
    }
}

void Character::attack(Enemy *enemy)
{
    if (this->_currentWeapon && this->_currentWeapon->getAPCost() < this->_ap)
    {
        std::cout << _name << " attacks " << enemy->getType() << " with a "
        << this->_currentWeapon->getName() << std::endl;
        this->_currentWeapon->attack();
        enemy->takeDamage(this->_currentWeapon->getDamage());
        this->_ap -= this->_currentWeapon->getAPCost();
		if (enemy->getHP() <= 0)
            delete enemy;
    }
}

void Character::equip(AWeapon *weapon)
{
    this->_currentWeapon = weapon;
}

std::ostream & operator<<(std::ostream & o, const Character & rhs)
{
    if (rhs.getWeapon())
    {
        o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a "
        << rhs.getWeapon()->getName() << std::endl;
    }
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    return o;
}
