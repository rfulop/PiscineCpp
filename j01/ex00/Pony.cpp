/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 01:57:50 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 01:57:52 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << "Pony " << _name << " is born !" << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Pony " << _name << " is dead :(" << std::endl;
}

void Pony::display_name() const
{
    std::cout << _name << std::endl;
}
