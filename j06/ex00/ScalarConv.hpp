/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 09:38:32 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONV_H
#define SCALARCONV_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>

class ScalarConv
{
public:
    ScalarConv(std::string param);
    ~ScalarConv(void);
    ScalarConv(const ScalarConv & src);
    ScalarConv & operator=(const ScalarConv & rhs);

    operator char(void) const;
    operator int(void) const;
    operator float(void) const;
    operator double(void) const;

private:
    std::string _param;

};

#endif
