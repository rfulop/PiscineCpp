/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 07:49:28 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
    this->_tab.reserve(n);
}

Span::~Span(void)
{
    this->_tab.clear();
}

Span::Span(const Span & src)
{
    *this = src;
}

Span & Span::operator=(const Span & rhs)
{
    this->_tab = rhs._tab;
    return *this;
}

void Span::addNumber(int n)
{
    if (this->_tab.capacity() == this->_tab.size())
        throw std::exception();
    this->_tab.push_back(n);
}

int Span::shortestSpan(void) const
{
    std::vector<int> tmp = this->_tab;
    std::sort(tmp.begin(), tmp.end());
    std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
    std::vector<int>::iterator ret = std::min_element(tmp.begin(), tmp.end());
    return *ret;
}

int Span::longestSpan(void)
{
    std::vector<int>::iterator	min = std::min_element(_tab.begin(), _tab.end());
    std::vector<int>::iterator	max = std::max_element(_tab.begin(), _tab.end());

    return *max - *min;
}
