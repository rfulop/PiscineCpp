/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 09:54:19 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm(void);
    PresidentialPardonForm(const PresidentialPardonForm & src);
    PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

    std::string getTarget(void) const;

    void action(void) const;

private:
    std::string _target;

};

#endif
