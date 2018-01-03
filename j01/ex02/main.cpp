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

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>
#include <iostream>


const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main(void)
{
    char z;
    uint64_t rdd;
    int fd;
    char fc[256];

    fd = open("/dev/urandom", O_RDONLY);
    read(fd, &rdd, sizeof(rdd));
    srand(rdd);
    fc[255] = 0;
    for (int i = 0; i < 15; i++)
    {
        z = alphabet[rand() % sizeof(alphabet)];
        std::cout << (char)z;
    }
    std::cout << std::endl;
    close(fd);
}
