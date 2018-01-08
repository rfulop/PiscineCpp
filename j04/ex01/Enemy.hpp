/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:14:48 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{
public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy(void);
    Enemy(const Enemy & src);
    Enemy & operator=(const Enemy & rhs);

    std::string getType(void) const;
    int getHP(void) const;

    virtual void takeDamage(int damage);

protected:
    int _hp;
    std::string _type;

private:
	Enemy(void);
};

#endif
