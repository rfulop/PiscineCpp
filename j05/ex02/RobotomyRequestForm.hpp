/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 09:54:35 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm(void);
    RobotomyRequestForm(const RobotomyRequestForm & src);
    RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

    std::string getTarget(void) const;

    void action(void) const;

private:
    std::string _target;

};

#endif
