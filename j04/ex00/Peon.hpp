/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:22:33 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_H
#define Peon_H

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(std::string name);
    ~Peon(void);
    Peon(const Peon & src);
    Peon & operator=(const Peon & rhs);

    virtual void getPolymorphed(void) const;

private:
    Peon(void);
};

#endif
