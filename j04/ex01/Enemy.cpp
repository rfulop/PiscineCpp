/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:33:57 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
: _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy & src)
{
    *this = src;
}

Enemy & Enemy::operator=(const Enemy & rhs)
{
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return *this;
}

Enemy::~Enemy(void)
{
}

std::string Enemy::getType(void) const { return this->_type; }

int Enemy::getHP(void) const { return this->_hp; }

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        this->_hp -= damage;
    }
}
