/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 14:04:46 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:
    Character(std::string const & name);
    ~Character(void);
    Character(const Character & src);
    Character & operator=(const Character & rhs);

    std::string getName(void) const;
    int getAP(void) const;
    AWeapon *getWeapon(void) const;

    void recoverAP(void);
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);

protected:
    std::string _name;
    int _ap;
    AWeapon* _currentWeapon;
    
private:
	Character(void);
};

std::ostream & operator<<(std::ostream & o, const Character & rhs);

#endif
