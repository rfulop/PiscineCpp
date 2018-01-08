/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 11:49:15 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer(void);
    Sorcerer(const Sorcerer & src);
    Sorcerer & operator=(const Sorcerer & rhs);

    std::string getName(void) const;
    std::string getTitle(void) const;
    void polymorph(Victim const & victim) const;


private:
    std::string _name;
    std::string _title;

private:
    Sorcerer(void);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
