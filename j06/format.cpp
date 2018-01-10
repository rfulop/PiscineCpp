/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 02:26:59 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
}

Form::~Form(void)
{
}

Form::Form(const Form & src)
{
    *this = src;
}

Form & Form::operator=(const Form & rhs)
{
    this->_truc = rhs._truc;
    return *this;
}

std::ostream & operator<<(std::ostream & o, const Form & rhs)
{
    o << std::endl;
    return o;
}
