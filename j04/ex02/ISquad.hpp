/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 16:36:25 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H

#include "ISpaceMarine.hpp"

class ISquad
{
public:
    virtual ~ISquad(void) {}
    virtual int getCount(void) const = 0;
    virtual ISpaceMarine *getUnit(int unit) const = 0;
    virtual int push(ISpaceMarine* unit) = 0;
};

#endif
