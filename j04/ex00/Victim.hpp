/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:13:33 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>
#include <string>

class Victim
{
public:
    Victim(void) = delete;
    Victim(std::string name);
    ~Victim(void);
    Victim(const Victim & src);
    Victim & operator=(const Victim & rhs);

    std::string getName(void) const;
    void getPolymorphed(void) const;

protected:
    std::string _name;
};

std::ostream & operator<<(std::ostream & o, const Victim & rhs);

#endif
