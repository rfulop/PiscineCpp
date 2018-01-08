/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 16:43:49 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad(void)
{
    this->_nb = 0;
}

Squad::~Squad(void)
{
    for (unsigned int i = 0; i < this->_units.size(); ++i)
        delete _units[i];
}

Squad::Squad(const Squad & src)
{
    *this = src;
}

Squad & Squad::operator=(const Squad & rhs)
{
    this->_nb = rhs._nb;
    this->_units.clear();
    this->_units = rhs._units;
    return *this;
}

int Squad::getCount(void) const { return this->_nb; }

ISpaceMarine * Squad::getUnit(int i) const { return this->_units[i]; }

int Squad::push(ISpaceMarine * unit)
{
    this->_units.push_back(unit);
    this->_nb++;
    return _nb;
}
