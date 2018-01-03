/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:46:04 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:46:05 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

ZombieEvent::ZombieEvent(void)
{
    _type = "Unknow zombie";
}

ZombieEvent::~ZombieEvent(void) {}

void ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zomb = new Zombie(name, _type);
    return zomb;
}

std::string ZombieEvent::randStr(void)
{
    char z;
    uint64_t rdd;
    int fd;
    int size;
    std::string fc;

    fd = open("/dev/urandom", O_RDONLY);
    read(fd, &rdd, sizeof(rdd));
    srand(rdd);
    size = rand() % 8 + 8;
    for (int i = 0; i < size; i++)
        fc += alphabet[rand() % sizeof(alphabet)];
    close(fd);
    return fc;
}

Zombie* ZombieEvent::randomChump(void)
{
    return newZombie(randStr());
}
