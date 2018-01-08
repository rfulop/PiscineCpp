/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 11:58:24 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) :
_name(name)
{
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(const Victim & src)
{
    *this = src;
}

Victim & Victim::operator=(const Victim & rhs)
{
    _name = rhs._name;
    return *this;
}

std::string Victim::getName(void) const { return this->_name; }

void Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, const Victim & rhs)
{
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}
