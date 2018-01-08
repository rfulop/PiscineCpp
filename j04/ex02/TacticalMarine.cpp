/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 16:47:31 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine & src)
{
    *this = src;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine & rhs)
{
    (void)rhs;
    return *this;
}

ISpaceMarine * TacticalMarine::clone(void) const
{
    ISpaceMarine *newUnit = new TacticalMarine(*this);
    return newUnit;
}

void TacticalMarine::battleCry(void) const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}
