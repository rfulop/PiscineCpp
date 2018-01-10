/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 02:24:19 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
public:
    Bureaucrat();
    ~Bureaucrat(void);
    Bureaucrat(const Bureaucrat & src);
    Bureaucrat & operator=(const Bureaucrat & rhs);

private:

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs);

#endif
