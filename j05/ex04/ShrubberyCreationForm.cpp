/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 09:51:56 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery Creation Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
: Form("Shrubbery Creation Form", 145, 137)
{
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    this->_target = rhs._target;
    return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const { return this->_target; }

void ShrubberyCreationForm::action(void) const
{
    std::fstream file;
    std::string fileName = this->_target + "_shrubbery";

    file.open(fileName.c_str(), std::fstream::out);
    if (file.is_open())
    {
        file << "         _-_ " << std::endl
        << "      /~~   ~~\\ " << std::endl
        << "   /~~         ~~\\ " << std::endl
        << "  {               } " << std::endl
        << "   \\  _-     -_  / " << std::endl
        << "     ~  \\\\ //  ~ " << std::endl
        << "  _- -   | | _- _ " << std::endl
        << "    _ -  | |   -_ " << std::endl
        << "        // \\ " << std::endl
        << std::endl;
    }
    file.close();
}
