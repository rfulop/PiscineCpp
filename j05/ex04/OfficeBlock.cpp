/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/09 12:07:35 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void)
{
    this->_intern = NULL;
    this->_signer = NULL;
    this->_executor = NULL;
}

OfficeBlock::OfficeBlock(Intern & intern, Bureaucrat & signer, Bureaucrat & executor)
: _intern(&intern), _signer(&signer), _executor(&executor)
{
}

OfficeBlock::~OfficeBlock(void)
{
}

void OfficeBlock::setIntern(Intern & intern)
{
    this->_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat & signer)
{
    this->_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat & executor)
{
    this->_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string name, std::string target)
{
    Form *form;

    if (!this->_intern)
        throw NoIntern();
    if (!this->_signer)
        throw NoSigner();
    if (!this->_executor)
        throw NoExecutor();
    if (!(form = this->_intern->makeForm(name, target)))
        throw WrongForm();

    this->_signer->signForm(*form);
    this->_executor->executeForm(*form);
}

OfficeBlock::WrongForm::WrongForm(void) {}
OfficeBlock::WrongForm::~WrongForm(void) throw() {}
OfficeBlock::WrongForm::WrongForm(OfficeBlock::WrongForm const & src) { *this = src; }
OfficeBlock::WrongForm & OfficeBlock::WrongForm::operator=(OfficeBlock::WrongForm const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}
const char * OfficeBlock::WrongForm::what() const throw()
{
    return "Intern does not know this form.";
}

OfficeBlock::NoIntern::NoIntern(void) {}
OfficeBlock::NoIntern::~NoIntern(void) throw() {}
OfficeBlock::NoIntern::NoIntern(OfficeBlock::NoIntern const & src) { *this = src; }
OfficeBlock::NoIntern & OfficeBlock::NoIntern::operator=(OfficeBlock::NoIntern const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}
const char * OfficeBlock::NoIntern::what() const throw()
{
    return "Office does not have an intern.";
}

OfficeBlock::NoSigner::NoSigner(void) {}
OfficeBlock::NoSigner::~NoSigner(void) throw() {}
OfficeBlock::NoSigner::NoSigner(OfficeBlock::NoSigner const & src) { *this = src; }
OfficeBlock::NoSigner & OfficeBlock::NoSigner::operator=(OfficeBlock::NoSigner const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}
const char * OfficeBlock::NoSigner::what() const throw()
{
    return "Office does not have a signer.";
}

OfficeBlock::NoExecutor::NoExecutor(void) {}
OfficeBlock::NoExecutor::~NoExecutor(void) throw() {}
OfficeBlock::NoExecutor::NoExecutor(OfficeBlock::NoExecutor const & src) { *this = src; }
OfficeBlock::NoExecutor & OfficeBlock::NoExecutor::operator=(OfficeBlock::NoExecutor const & rhs)
{
    std::exception::operator=(rhs);
    return (*this);
}
const char * OfficeBlock::NoExecutor::what() const throw()
{
    return "Office does not have an executor.";
}
