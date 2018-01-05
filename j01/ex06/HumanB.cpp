/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 03:34:08 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/05 03:34:10 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
: _name(name)
{}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = weapon;
}

void HumanB::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
