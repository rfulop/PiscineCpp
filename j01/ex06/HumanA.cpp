/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 03:33:50 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/05 03:33:52 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _weapon(&weapon)
{}

void HumanA::attack(void) const
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
