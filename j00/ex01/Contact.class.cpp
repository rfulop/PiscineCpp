/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 04:32:08 by rfulop            #+#    #+#             */
/*   Updated: 2017/12/30 04:32:30 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(std::string &tab)
{
    std::cout << "Construct Contact named " << tab[0] << std::end;

}

Contact::~Contact()
{

}

std::string Contact::get_info(int info) const
{
    if (info)
        return "LALA";
    return NULL;
}
