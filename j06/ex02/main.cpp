/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 20:59:53 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 12:46:56 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <string>
#include <iostream>
#include <cstdlib>


void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "C" << std::endl;
}

Base *generate(void)
{
	srand(time(NULL));
	int n = std::rand() % 3;

	switch (n)
	{
		case 0:
			return static_cast<Base *>(new A());
		case 1:
			return static_cast<Base *>(new B());
		case 2:
			return static_cast<Base *>(new C());
	}
	return NULL;
}

int					main(void)
{
	Base *base;

	base = generate();
	if (!base)
		return (-1);
	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
