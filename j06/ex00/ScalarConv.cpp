/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 09:38:35 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConv.hpp"

ScalarConv::ScalarConv(std::string param)
: _param(param)
{
}

ScalarConv::~ScalarConv(void)
{
}

ScalarConv::ScalarConv(const ScalarConv & src)
{
    *this = src;
}

ScalarConv & ScalarConv::operator=(const ScalarConv & rhs)
{
    this->_param = rhs._param;
    return *this;
}

ScalarConv::operator char(void) const
{
    int n = std::atoi(_param.c_str());
    char c = static_cast<char>(n);
    if (!c || (!n && this->_param != "0") || !isprint(n))
        throw std::exception();
    return c;
}

ScalarConv::operator int(void) const
{
    int n = std::atoi(_param.c_str());
    if (!n && this->_param != "0")
        throw std::exception();
    return n;
}

ScalarConv::operator float(void) const
{
    float f = std::atof(_param.c_str());
    if (errno || (!f && this->_param != "0"))
        throw std::exception();
    return f;
}

ScalarConv::operator double(void) const
{
    double d = std::stod(_param.c_str());
    if (errno || (!d && this->_param != "0"))
        throw std::exception();
    return d;
}
