/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:57:06 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & src)
: AWeapon(src)
{
    *this = src;
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle & rhs)
{
    this->_name = rhs._name;
    this->_damage = rhs._damage;
    this->_apCost = rhs._apCost;
    return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

void PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
