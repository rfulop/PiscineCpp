/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 02:29:06 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 02:34:42 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

int main(void)
{
	memoryLeak();
	return 0;
}
