/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 11:58:55 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & src)
{
    *this = src;
}

Sorcerer & Sorcerer::operator=(const Sorcerer & rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName(void) const { return this->_name; }

std::string Sorcerer::getTitle(void) const { return this->_title; }

void Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and i like ponies !" << std::endl;
    return o;
}
