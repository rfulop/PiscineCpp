/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 10:08:23 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <cstdlib>
#include <string>
#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack
{
public:
    MutantStack<T>(void) : _stack(), _size(0) {}
    ~MutantStack<T>(void) {}
    MutantStack<T>(const MutantStack & src) { *this = src; }

    operator std::stack<T>(void)
    {
        std::stack<T> ret;
        iterator i_begin = begin();
        iterator i_end = end();
        --i_begin;
        --i_end;
        for (iterator i = i_end; i != i_begin; --i)
            ret.push(*i);
        return ret;
    }
    MutantStack<T> & operator=(const MutantStack<T> & rhs)
    {
        this->_stack = rhs._stack;
        this->_size = rhs._size;
    }

    bool empty(void) const { return (this->_size ? true : false); }

    typedef typename std::list<T>::size_type size_type;
    size_type size(void) const { return this->_size; };

    typedef typename std::list<T>::value_type value_type;
    const value_type & top(void) const { return this->_stack.front(); }
    void push (const value_type & val)
    {
        this->_stack.push_front(val);
        this->_size++;
    }
    void pop(void)
    {
        if (this->_size)
        {
            this->_stack.pop_front();
            this->_size--;
        }
    }

    typedef typename std::list<T>::iterator iterator;
    iterator begin(void) const { this->_stack.begin(); }
    iterator end(void) const { this->_stack.end(); }

private:
    std::list<T> _stack;
    int _size;

};

#endif
