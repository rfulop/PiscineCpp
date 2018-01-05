/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 03:55:34 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/04 03:55:35 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iomanip>
#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
public:
    ZombieHorde(int N);
    ~ZombieHorde(void);
    std::string randStr(void);
    void announce(void);

private:
    Zombie *_horde;
    int     _n;
};

#endif
