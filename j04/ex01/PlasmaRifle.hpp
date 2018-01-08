/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmRifle.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 12:49:25 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle(void);
    ~PlasmaRifle(void);
    PlasmaRifle(const PlasmaRifle & src);
    PlasmaRifle & operator=(const PlasmaRifle & rhs);

    void attack(void) const;
};

#endif
