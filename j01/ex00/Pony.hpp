/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 01:58:06 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/03 01:58:07 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>
#include <iomanip>

class Pony
{
public:
    Pony(std::string name);
    ~Pony(void);
    void display_name() const;

private:
    std::string _name;
};

#endif
