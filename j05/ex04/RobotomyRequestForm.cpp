/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 09:52:57 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("Robotmy Request Form", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
: Form("Robotmy Request Form", 72, 45)
{
    *this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    this->_target = rhs._target;
    return *this;
}


std::string RobotomyRequestForm::getTarget(void) const { return this->_target; }

void RobotomyRequestForm::action(void) const
{
    std::cout << "* Drilling noises *" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotmized !";
    else
        std::cout << "Falling.. " << this->_target << " has not been robotmized :(";
    std::cout << std::endl;
}
