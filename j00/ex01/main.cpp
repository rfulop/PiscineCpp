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

void add_contact(Contact *contact, int i)
{
    std::string tab[11];

    if (i > MAX_CONTACTS - 1)
    {
        std::cout << "No space left. You already has 8 contacts." << std::endl;
        return ;
    }
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

void print_contact(Contact *contact, int i)
{
    std::cout << "First name : " << contact[i].get_info(FNAME) << std::endl
    << "Last name : " << contact[i].get_info(LNAME) << std::endl
    << "Nickname : " << contact[i].get_info(NICKN) << std::endl
    << "Login : " << contact[i].get_info(LOGIN) << std::endl
    << "Post address : " << contact[i].get_info(ADDR) << std::endl
    << "Email address : " << contact[i].get_info(MAIL) << std::endl
    << "Phone number : " << contact[i].get_info(PHONE) << std::endl
    << "Birthday date : " << contact[i].get_info(BDATE) << std::endl
    << "Favorite meal : " << contact[i].get_info(PMEAL) << std::endl
    << "Underwear color : " << contact[i].get_info(UCOLOR) << std::endl
    << "Darkest secret : " << contact[i].get_info(SECRET) << std::endl
    << std::endl;

}

void search_contacts(Contact *contact)
{
    int i;
    int len;
    int pick;

    i = 0;
    if (!contact[i].get_info(FNAME).empty())
    {
        std::cout << SEP
        << std::right << std::setw(10) << "Index" << SEP
        << std::right << std::setw(10) << "First name" << SEP
        << std::right << std::setw(10) << "Last name" << SEP
        << std::right << std::setw(10) << "Nickname"
        << SEP << std::endl;
    }
    else
    {
        std::cout << "No contact yet." << std::endl << std::endl;
        return ;
    }
    while (!contact[i].get_info(FNAME).empty() && i < MAX_CONTACTS)
    {
        std::cout << SEP;
        std::cout << std::right << std::setw(10) << i + 1 << SEP;
        len = contact[i].get_info(FNAME).length();
        if (len > 9)
            std::cout << std::right << std::setw(10) << contact[i].get_info(FNAME).replace(9, len, ".") << SEP;
        else
            std::cout << std::right << std::setw(10) << contact[i].get_info(FNAME) << SEP;
        len = contact[i].get_info(LNAME).length();
        if (len > 9)
            std::cout << std::right << std::setw(10) << contact[i].get_info(LNAME).replace(9, len, ".") << SEP;
        else
            std::cout << std::right << std::setw(10) << contact[i].get_info(LNAME) << SEP;
        len = contact[i].get_info(NICKN).length();
        if (len > 9)
            std::cout << std::right << std::setw(10) << contact[i].get_info(NICKN).replace(9, len, ".") << SEP;
        else
            std::cout << std::right << std::setw(10) << contact[i].get_info(NICKN) << SEP << std::endl;
        ++i;
     }
     pick = 0;
     do
    {
        std::cout << "Pick the index of the contact you want to display : ";
        std::cin >> pick;
        std::cout << std::endl;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        --pick;
        if (pick < 0 || pick >= i)
            std::cout << "This index does not exist." << std::endl;
    } while (pick < 0 || pick >= i);
    print_contact(contact, pick);
}

int main(void)
{
    int i;
    Contact contacts[MAX_CONTACTS];
    std::string buf;

    i = 0;
    while (std::getline(std::cin, buf))
    {
        if (buf == ADD)
        {
            add_contact(&contacts[i], i);
            ++i;
        }
        else if (buf == SEARCH)
            search_contacts(contacts);
        else if (buf == EXIT)
        {
            std::cout << "All contacts are destroy." << std::endl;
            exit(0);
        }
    }
    return (0);
}
