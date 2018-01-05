/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 03:33:58 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/05 03:33:59 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
    HumanA (std::string name, Weapon &weapon);
    void attack(void) const;
private:
    Weapon *_weapon;
    std::string _name;
};

#endif
