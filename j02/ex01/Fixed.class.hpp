/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 03:29:24 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed(void);
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed(void);
    Fixed(const Fixed & cp);
    Fixed & operator=(const Fixed & rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    static const int _fractionnalBit;
    int _fixedPoint;
};

std::ostream &operator<<(std::ostream &o, Fixed const & rhs);

#endif
