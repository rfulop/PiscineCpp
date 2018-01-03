/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:45:43 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:45:44 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
: _name(name), _type(type)
{
}

Zombie::~Zombie(void)
{
}

void Zombie::announce(void) const
{
    std::cout << "<" << _name
    << " ("<< _type <<")> Braiiiiiiinnnssss..." << std::endl;
}
