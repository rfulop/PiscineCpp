/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 04:36:26 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
    if (grade < BEST_GRADE)
        throw GradeTooHighException();
    else if (grade > WORST_GRADE)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & src)
{
    *this = src;
}

void Bureaucrat::signForm(Form & form)
{
    try
    {
        form.beSigned(*this);
        std::cout << form.getIsSigned() << this->_name << " signs \"" << form.getName() << "\"." << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << this->_name << " cannot sign \"" << form.getName() << "\" because "
        << e.what() << std::endl;
    }
}

std::string Bureaucrat::getName(void) const { return this->_name; }

int Bureaucrat::getGrade(void) const { return this->_grade; }

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    this->_name = rhs._name;
    this->_grade = rhs._grade;
    return *this;
}

Bureaucrat Bureaucrat::operator++(int)
{
    if (this->_grade - 1 < BEST_GRADE)
        throw GradeTooHighException();
    else
    {
        Bureaucrat bureaucrat("", 150);

        bureaucrat = *this;
        this->_grade--;
        return bureaucrat;
    }
}

Bureaucrat & Bureaucrat::operator++(void)
{
    if (this->_grade - 1 < BEST_GRADE)
        throw GradeTooHighException();
    else
        this->_grade--;
    return *this;
}

Bureaucrat Bureaucrat::operator--(int)
{
    if (this->_grade + 1 > WORST_GRADE)
        throw GradeTooLowException();
    else
    {
        Bureaucrat bureaucrat("", 150);

        bureaucrat = *this;
        this->_grade++;
        return bureaucrat;
    }
}

Bureaucrat & Bureaucrat::operator--(void)
{
    if (this->_grade + 1 > WORST_GRADE)
        throw GradeTooLowException();
    else
        this->_grade++;
    return *this;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." <<  std::endl;
    return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
    *this = src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Bureaucrat's grade too high.";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
    *this = src;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Bureaucrat's grade too low.";
}
