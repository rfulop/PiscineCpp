/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 04:31:35 by rfulop            #+#    #+#             */
/*   Updated: 2017/12/30 04:31:36 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string take_line(std::string field)
{
    std::string buf;

    std::cout << field;
    std::getline(std::cin, buf);
    return (buf);
}

void add_contact(Contact *contact)
{
    std::string tab[11];

    tab[FNAME] = take_line("First name : ");
    tab[LNAME] = take_line("Last name : ");
    tab[NICKN] = take_line("Nickname : ");
    tab[LOGIN] = take_line("Login : ");
    tab[ADDR] = take_line("Post address : ");
    tab[MAIL] = take_line("Email address : ");
    tab[PHONE] = take_line("Phone number : ");
    tab[BDATE] = take_line("Birthday date : ");
    tab[PMEAL] = take_line("Favorite meal : ");
    tab[UCOLOR] = take_line("underwear color : ");
    tab[SECRET] = take_line("Darkest secret : ");
    contact->set_info(tab);
}

void search_contacts(void)
{
    std::cout << "Search contact" << std::endl;
}

void _exit(void)
{
    std::cout << "Exit" << std::endl;
}

int main(void)
{
    int i;
    Contact contacts[8];
    std::string buf;

    i = 0;
    while (std::getline(std::cin, buf))
    {
        if (buf == ADD)
        {
            add_contact(&contacts[i]);
            ++i;
        }
        else if (buf == SEARCH)
            search_contacts();
        else if (buf == EXIT)
            _exit();
        else
            ;
    }
    return (0);
}
