/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 08:54:39 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
    Form(std::string name, int execRequiredGrade, int signRequiredGrade);
    ~Form(void);
    Form(const Form & src);
    Form & operator=(const Form & rhs);

    std::string getName(void) const;
    bool getIsSigned(void) const;
    int getExecRequiredGrade(void) const;
    int getSignRequiredGrade(void) const;

    void beSigned(Bureaucrat & bureaucrat);
    void execute(const Bureaucrat & executor) const;

    virtual void action(void) const;

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        ~GradeTooHighException() throw();
        GradeTooHighException(const GradeTooHighException & rhs);
        GradeTooHighException & operator=(const GradeTooHighException & src);
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        ~GradeTooLowException() throw();
        GradeTooLowException(const GradeTooLowException & rhs);
        GradeTooLowException & operator=(const GradeTooLowException & src);
        virtual const char *what() const throw();
    };

    class FormNotSigned : public std::exception
    {
    public:
        FormNotSigned();
        ~FormNotSigned() throw();
        FormNotSigned(const FormNotSigned & rhs);
        FormNotSigned & operator=(const FormNotSigned & src);
        virtual const char *what() const throw();
    };

private:
    Form(void);
    const std::string _name;
    bool _isSigned;
    const int _execRequiredGrade;
    const int _signRequiredGrade;

};

std::ostream & operator<<(std::ostream & o, const Form & rhs);

#endif
