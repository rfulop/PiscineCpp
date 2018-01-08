/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:22:38 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) :
Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark.." << std::endl;
}

Peon::Peon(const Peon & src) : Victim(src)
{
    *this = src;
}

Peon & Peon::operator=(const Peon & rhs)
{
    _name = rhs._name;
    return *this;
}

void Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
