/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 10:52:33 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern(void)
{
}

Intern::Intern(const Intern & src)
{
    *this = src;
}

Intern & Intern::operator=(const Intern & rhs)
{
    (void)rhs;
    return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
    Form *newForm;

    if (formName == "robotomy request")
        newForm = (Form*)new RobotomyRequestForm(formTarget);
    else if (formName == "shrubbery creation")
        newForm = (Form*)new ShrubberyCreationForm(formTarget);
    else if (formName == "presidential pardon")
        newForm = new PresidentialPardonForm(formTarget);
    else
    {
        std::cout << "Intern does not know this form :(" << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << *newForm;
    return newForm;
}
