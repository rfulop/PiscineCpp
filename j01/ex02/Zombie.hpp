/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:45:50 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:45:51 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    void announce(void) const;

private:
    std::string _name;
    std::string _type;
};

#endif
