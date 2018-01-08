/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 16:33:01 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp"
#include <vector>

class Squad : public ISquad
{
public:
    Squad(void);
    ~Squad(void);
    Squad(const Squad & src);
    Squad & operator=(const Squad & rhs);

    int getCount(void) const;
    ISpaceMarine *getUnit(int i) const;
    int push(ISpaceMarine* unit);
private:
    std::vector<ISpaceMarine *> _units;
    int _nb;
};

#endif
