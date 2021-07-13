/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:36:41 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/13 11:35:33 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <ostream>
# include <string>
# include <iostream>
# include <exception>

template<typename T>
class Array
{
    private:
        T *tb;
        int tablen;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const& src);
        Array & operator=(Array const& rhs);
        T & operator[](int index);
        ~Array();
           
        int size() const;
};

template<typename T>
Array<T>::Array() : tb(NULL), tablen(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : tb(new T[n]()), tablen(n) {}

template<typename T>
Array<T>::~Array()
{
   delete [] this->tb;
};


template<typename T>
Array<T>::Array(Array const& src) : tb(NULL)
{
    *this = src;
}

template<typename T>
Array<T> & Array<T>::operator=(Array const& rhs)
{
    if (this != &rhs)
    {
        delete [] this->tb;
        if (rhs.tablen != 0)
            this->tb = new T[rhs.tablen];
        else
            this->tb = NULL;
        this->tablen = rhs.tablen;
        for (int i = 0; i < this->tablen; i++)
            this->tb[i] = rhs.tb[i];
    }
    return *this;
}

template<typename T>
T  & Array<T>::operator[](int index)
{
    if (index < 0 || index >= this->tablen)
        throw std::exception();
    return this->tb[index];
}

template<typename T>
int Array<T>::size() const
{
    return this->tablen;
}

#endif
