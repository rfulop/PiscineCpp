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
    Zombie *newZombie = new Zombie(name);
    return newZombie;
}

Zombie* ZombieEvent::randomChump(void)
{
    uint8_t z;
    int fd;
    char fuck[256];

    fd = open("/dev/urandom", O_RDONLY);
    fuck[255] = 0;
    for (int i = 0; i < 255; i++)
    {
        read(fd, &z, 1);
        if (z == 0)
            break ;
        if (z < 32)
            z += 32;
        std::cout << (char)z;
    }
    close(fd);
}
