/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 04:32:36 by rfulop            #+#    #+#             */
/*   Updated: 2017/12/30 04:32:38 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

#define FNAME 0
#define LNAME 1
#define NICKN 2
#define LOGIN 3
#define ADDR 4
#define MAIL 5
#define PHONE 6
#define BDATE 7
#define PMEAL 8
#define UCOLOR 9
#define SECRET 10

class Contact
{
public:
    Contact(std::string &tab);
    ~Contact(void);
    std::string get_info(int info) const;

private:
    // std::string _fName;
    // std::string _lName;
    // std::string _nickN;
    // std::string _login;
    // std::string _addr;
    // std::string _mail;
    // std::string _phone;
    // std::string _bDate;
    // std::string _pMeal;
    // std::string _uColor;
    // std::string _secret;
    std::string tab[11];
};

#endif
