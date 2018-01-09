/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 10:10:53 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int execRequiredGrade, int signRequiredGrade)
: _name(name), _isSigned(false), _execRequiredGrade(execRequiredGrade), _signRequiredGrade(signRequiredGrade)
{
    if (execRequiredGrade < BEST_GRADE || signRequiredGrade < BEST_GRADE)
        throw GradeTooHighException();
    else if (execRequiredGrade > WORST_GRADE || signRequiredGrade > WORST_GRADE)
        throw GradeTooLowException();
}

Form::~Form(void)
{
}

Form::Form(const Form & src)
: _name(src._name), _isSigned(false), _execRequiredGrade(src._execRequiredGrade), _signRequiredGrade(src._signRequiredGrade)
{
    *this = src;
}

Form & Form::operator=(const Form & rhs)
{
    this->_isSigned = rhs._isSigned;
    return *this;
}

void Form::action(void) const {}

void Form::execute(const Bureaucrat & executor) const
{
    if (!this->_isSigned)
        throw FormNotSigned();
    else if (executor.getGrade() > this->_execRequiredGrade)
        throw GradeTooHighException();
    else
    {
        std::cout << executor.getName() << " executes " << this->_name << "." << std::endl;
        this->action();
    }
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
    if (this->_isSigned)
        std::cout << "Form \"" << this->_name << "\" is already signed." << std::endl;
    else if (bureaucrat.getGrade() > this->_signRequiredGrade)
    {
        std::cout << bureaucrat.getName() << " can't sign this. ";
        throw GradeTooHighException();
    }
    else
    {
        std::cout << bureaucrat.getName() << " signs \"" << this->_name << "\"." << std::endl;
        this->_isSigned = true;
    }
}

std::string Form::getName(void) const { return this->_name; }

bool Form::getIsSigned(void) const { return this->_isSigned; }

int Form::getExecRequiredGrade(void) const { return this->_execRequiredGrade; }

int Form::getSignRequiredGrade(void) const { return this->_signRequiredGrade; }

std::ostream & operator<<(std::ostream & o, const Form & rhs)
{
    o << "Form \"" << rhs.getName() << "\" requires grade " << rhs.getExecRequiredGrade()
    << " for execution, and grade " << rhs.getSignRequiredGrade() << " to be signed.";
    if (rhs.getIsSigned())
        o << " It's signed." << std::endl;
    else
        o << " It's not signed." << std::endl;
    return o;
}

Form::GradeTooHighException::GradeTooHighException(void) {}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
    *this = src;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Form's grade too high.";
}

Form::GradeTooLowException::GradeTooLowException(void) {}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
    *this = src;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Form's grade too low.";
}

Form::FormNotSigned::FormNotSigned(void) {}

Form::FormNotSigned::~FormNotSigned(void) throw() {}

Form::FormNotSigned::FormNotSigned(FormNotSigned const & src)
{
    *this = src;
}

Form::FormNotSigned & Form::FormNotSigned::operator=(Form::FormNotSigned const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}

const char * Form::FormNotSigned::what() const throw()
{
    return "Form has not been signed.";
}
