/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 03:37:31 by rfulop            #+#    #+#             */
/*   Updated: 2017/12/30 04:10:37 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>


int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		a = 1;
		while (a < argc)
		{
			b = 0;
			while (argv[a][b])
			{
				std::cout << (char)toupper(argv[a][b]);
				++b;
			}
			++a;
		}
	}
	std::cout << std::endl;
	return (0);
}
