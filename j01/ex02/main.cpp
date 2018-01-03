/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:46:16 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:46:18 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent *event = new ZombieEvent();
    Zombie zomb1("jack", "Final Boss");

    event->setZombieType("Peon");

    Zombie *zomb2 = event->newZombie("Brahim");

    Zombie *zomb3 = event->randomChump();
    delete zomb2;
    delete zomb3;
    delete event;
    return (0);
}
