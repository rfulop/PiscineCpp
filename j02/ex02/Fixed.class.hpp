/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 04:14:01 by rfulop           ###   ########.fr       */
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
    Fixed(const Fixed & cp);
    ~Fixed(void);

    Fixed & operator=(const Fixed & rhs);
    bool operator>(const Fixed & rhs);
    bool operator<(const Fixed & rhs);
    bool operator>=(const Fixed & rhs);
    bool operator<=(const Fixed & rhs);
    bool operator==(const Fixed & rhs);
    bool operator!=(const Fixed & rhs);
    Fixed operator+(const Fixed & rhs);
    Fixed operator-(const Fixed & rhs);
    Fixed operator*(const Fixed & rhs);
    Fixed operator/(const Fixed & rhs);
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed & operator++(void);
    Fixed & operator--(void);

    static Fixed & max(Fixed & a, Fixed & b);
    static Fixed & min(Fixed & a, Fixed & b);
    static const Fixed & max(const Fixed & a, const Fixed & b);
    static const Fixed & min(const Fixed & a, const Fixed & b);

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
