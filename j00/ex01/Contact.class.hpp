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
    Contact(void);
    ~Contact(void);
    void set_info(std::string *tab, int index);
    std::string get_info(int info) const;
    int get_index() const;

private:
    std::string tab[11];
    int _index;
};

#endif
