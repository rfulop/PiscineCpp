/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:17 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/06 05:47:18 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _pt(0)
{
    std::cout << "Default constuctor called" << std::endl;
    _pt = 0;
}

Fixed::Fixed(const Fixed & cp)
{
    std::cout << "Copy constuctor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructof called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
}

Fixed::getRawBits(void) const;
{
    std::cout << "getRawBits member fonction called" << std::endl;
}

Fixed::setrRawBits(int const raw)
{
}
