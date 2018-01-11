/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 07:49:26 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
public:
    Span(unsigned int n);
    ~Span(void);
    Span(const Span & src);
    Span & operator=(const Span & rhs);

    void addNumber(int n);
    int shortestSpan(void) const;
    int longestSpan(void);

private:
    std::vector<int> _tab;
    Span(void);

};

#endif
