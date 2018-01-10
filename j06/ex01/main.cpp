/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 11:05:01 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>


struct Data
{
        std::string s1;
        int n;
        std::string s2;
};

void *serialize(void)
{
    char *ret = new char[20];
    std::string str = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < 8; ++i)
        ret[i] = str[(std::rand() % str.size() - 1)];
    int n = std::rand();
    *(reinterpret_cast<int *>(&ret[8])) = n;
    for (int i = 12; i < 20; ++i)
        ret[i] = str[(std::rand() % str.size() - 1)];
    return reinterpret_cast<void *> (ret);
}

Data *deserialize(void *raw)
{
    Data *data = new Data;

    data->s1.assign(static_cast<char *>(raw), 8);
    data->n = *reinterpret_cast<int *>(&reinterpret_cast<char *>(raw)[8]);
    data->s2.assign(&static_cast<char *>(raw)[12], 8);
    return data;
}

int main(void)
{
    Data *data;
    srand(time(NULL));
    void *ret = serialize();
    data = deserialize(ret);
    std::cout << "S1 = " << data->s1 << std::endl;
    std::cout << "n = " << data->n << std::endl;
    std::cout << "S2 = " << data->s2 << std::endl;
    return 0;
}
