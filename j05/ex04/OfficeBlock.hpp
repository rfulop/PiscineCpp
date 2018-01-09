/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 11:59:04 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
public:
    OfficeBlock(void);
    OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executor);
    ~OfficeBlock(void);

    void setIntern(Intern & intern);
    void setSigner(Bureaucrat & signer);
    void setExecutor(Bureaucrat & executor);

    void doBureaucracy(std::string name, std::string target);

    class WrongForm : public std::exception
    {
    public:
        WrongForm();
        ~WrongForm() throw();
        WrongForm(const WrongForm & rhs);
        WrongForm & operator=(const WrongForm & src);
        virtual const char *what() const throw();
    };

    class NoIntern : public std::exception
    {
    public:
        NoIntern();
        ~NoIntern() throw();
        NoIntern(const NoIntern & rhs);
        NoIntern & operator=(const NoIntern & src);
        virtual const char *what() const throw();
    };

    class NoSigner : public std::exception
    {
    public:
        NoSigner();
        ~NoSigner() throw();
        NoSigner(const NoSigner & rhs);
        NoSigner & operator=(const NoSigner & src);
        virtual const char *what() const throw();
    };

    class NoExecutor : public std::exception
    {
    public:
        NoExecutor();
        ~NoExecutor() throw();
        NoExecutor(const NoExecutor & rhs);
        NoExecutor & operator=(const NoExecutor & src);
        virtual const char *what() const throw();
    };

    // class GradeTooHighException : public std::exception
    // {
    // public:
    //     GradeTooHighException();
    //     ~GradeTooHighException() throw();
    //     GradeTooHighException(const GradeTooHighException & rhs);
    //     GradeTooHighException & operator=(const GradeTooHighException & src);
    //     virtual const char *what() const throw();
    // };

private:
    Intern  *_intern;
    Bureaucrat *_signer;
    Bureaucrat *_executor;

};

#endif
