/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:01:49 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{
public:
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(void) = delete;
    ~AWeapon(void);
    AWeapon(const AWeapon & src);
    AWeapon & operator=(const AWeapon & rhs);

    std::string getName(void) const;
    int getAPCost(void) const;
    int getDamage(void) const;
    virtual void attack(void) const = 0;

protected:
    std::string _name;
    int _damage;
    int _apCost;
};

#endif
