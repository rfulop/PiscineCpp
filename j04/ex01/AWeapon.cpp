/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:04:11 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _apCost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(const AWeapon & src)
{
    *this = src;
}

AWeapon & AWeapon::operator=(const AWeapon & rhs)
{
    this->_name = rhs._name;
    this->_damage = rhs._damage;
    this->_apCost = rhs._apCost;
    return *this;
}

AWeapon::~AWeapon(void)
{
}

std::string AWeapon::getName(void) const { return this->_name; }

int AWeapon::getAPCost(void) const { return this->_apCost; }

int AWeapon::getDamage(void) const { return this->_damage; }
