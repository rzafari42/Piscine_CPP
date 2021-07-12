/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:34:17 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/22 16:27:49 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const& src)
{
    *this = src;
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const& rhs)
{
    if (this != &rhs)
        std::stack<T>::operator=(rhs);
    return *this;
}
