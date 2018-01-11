/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/11 02:08:01 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <exception>

template<typename T>
class Array
{
public:
    Array<T>(void)
    : _len(0), _array(NULL)
    {
    }

    Array<T>(unsigned int n)
    : _len(n)
    {
        this->_array = new T[this->_len];
    }

    ~Array<T>(void)
    {
        delete [] _array;
    }

    Array<T>(const Array & src)
    {
        *this = src;
    }

    Array<T> & operator=(const Array<T> & rhs)
    {
        delete _array;
        this->_len = rhs._len;
        this->_array = new T[this->_len];
        for (unsigned int i = 0; i < this->_len; ++i)
            this->_array[i] = rhs._array[i];
        return *this;
    }

    T & operator[](unsigned int i)
    {
        if (i >= this->_len)
            throw OutOfLimit();
        return (_array[i]);
    }

    unsigned int size(void) const
    {
        return (this->_len);
    }

    class OutOfLimit : public std::exception
    {
    public:
        OutOfLimit(void) {}
        ~OutOfLimit(void) throw() {}
        const char * what(void) const throw()
        {
            return "Out of limit. Can't access this.";
        }
    };

private:
    unsigned int _len;
    T *_array;
};

#endif
