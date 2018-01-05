/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 03:33:29 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/05 03:33:30 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
public:
    Weapon(void);
    Weapon(std::string type);
    std::string getType(void) const;
    void setType(std::string type);
private:
    std::string _type;

};

#endif
