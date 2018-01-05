/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 03:55:23 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/04 03:55:25 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>

const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

std::string ZombieHorde::randStr(void)
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

ZombieHorde::ZombieHorde(int N) : _n(N)
{
    int i;

    i = 0;
    _horde = new Zombie[N];
    while (i < N)
    {
        _horde[i].set_name(randStr());
        _horde[i].set_type("Peon");
        ++i;
    }
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] _horde;
    std::cout << "An horde has been decimated." << std::endl;
}

void ZombieHorde::announce(void)
{
    int i;

    i = 0;
    std::cout << "An horde is coming !" << std::endl;
    while (i < _n)
    {
        _horde[i].announce();
        ++i;
    }
}
