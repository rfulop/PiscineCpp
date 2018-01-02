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
    ++nbContact;
    if (nbContact == MAX_CONTACTS)
    {
        std::cout << "Welcome on iContact ! " << std::endl;
        std::cout << "ADD: Set contact." << std::endl;
        std::cout << "SEARCH : Display contacts." << std::endl;
        std::cout << "EXIT : Leave program." << std::endl;
        std::cout << std::endl;
    }
}

Contact::~Contact()
{
    --nbContact;
    if (!nbContact)
        std::cout << "All contacts are destroy." << std::endl;
}

std::string Contact::get_info(int field) const
{
    return (this->tab[field]);
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

int Contact::nbContact = 0;
