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

Contact::Contact()
{
    std::cout << "Construct instance" << std::endl;
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

void Contact::set_info(std::string *tab)
{
    this->tab[FNAME] = tab[FNAME];
    this->tab[LNAME] = tab[LNAME];
    this->tab[NICKN] = tab[NICKN];
    this->tab[LOGIN] = tab[LOGIN];
    this->tab[ADDR] = tab[ADDR];
    this->tab[MAIL] = tab[MAIL];
    this->tab[PHONE] = tab[PHONE];
    this->tab[BDATE] = tab[BDATE];
    this->tab[PMEAL] = tab[PMEAL];
    this->tab[UCOLOR] = tab[UCOLOR];
    this->tab[SECRET] = tab[SECRET];
}
