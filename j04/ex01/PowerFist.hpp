/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:59:33 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
    PowerFist(void);
    ~PowerFist(void);
    PowerFist(const PowerFist & src);
    PowerFist & operator=(const PowerFist & rhs);

    void attack(void) const;
};

#endif
