/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:00:28 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
: AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(const PowerFist & src)
: AWeapon(src)
{
    *this = src;
}

PowerFist & PowerFist::operator=(const PowerFist & rhs)
{
    this->_name = rhs._name;
    this->_damage = rhs._damage;
    this->_apCost = rhs._apCost;
    return *this;
}

PowerFist::~PowerFist(void)
{
}

void PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
