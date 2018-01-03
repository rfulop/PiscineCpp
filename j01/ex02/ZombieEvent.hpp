/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:46:09 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:46:11 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <string>
# include <iomanip>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump(void);
    std::string randStr(void);
private:
    std::string _type;
};

#endif
