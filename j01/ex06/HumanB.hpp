/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 03:34:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/05 03:34:14 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_B
# define HUMANB_B

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
    HumanB(std::string name);
    void attack(void) const;
    void setWeapon(Weapon &weapon);
private:
    Weapon _weapon;
    std::string _name;

};

#endif
