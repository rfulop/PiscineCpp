/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 02:22:50 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed
{
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed & cp);
    Fixed & operator=(const Fixed & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    static const int _fractionnalBit;
    int _fixedPoint;
};

#endif
