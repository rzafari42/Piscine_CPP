/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:59:47 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/14 11:57:22 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <algorithm>
#include <vector>

Span::Span() : _size(0) {}

Span::Span( unsigned int N ) : _size(N) {}

Span::Span(Span const& src)
{
    *this = src;
}

Span::~Span() {}

Span & Span::operator=(Span const& rhs)
{
    if (this != &rhs)
    {
        this->_size = rhs._size;
        this->_tab = rhs._tab;
    }
    return *this;
}

void Span::addNumber(int numtoadd)
{
    if (this->_tab.size() == this->_size)
        throw std::exception();
    this->_tab.push_back(numtoadd);
}

std::vector<int> Span::copytab() const
{
    std::vector<int> cpy;

    for (unsigned int i = 0; i < this->_tab.size(); i++)
        cpy.push_back(this->_tab[i]);
    return cpy;
}

unsigned int Span::shortestSpan() const
{
    std::vector<int> cpy;
    int sh_span;
    unsigned int j;

    sh_span = INT_MAX;
    j = 0;
    if (this->_tab.empty() == true || this->_tab.size() == 1)
        throw std::exception();
    else
    {
        cpy = Span::copytab();
        std::sort(cpy.begin(), cpy.end());
        for (unsigned int i = 0; i < this->_tab.size() - 1; i++)
            for (j = i + 1; j < this->_tab.size(); j++)
                if (cpy[j] - cpy[i] < sh_span)
                    sh_span = cpy[j] - cpy[i];
        return sh_span;
    }
    return 0;
}

unsigned int Span::longestSpan() const
{
    std::vector<int> cpy;
    int max = 0, min = 0;

    if (this->_tab.empty() == true || this->_tab.size() == 1)
        throw std::exception();
    else
    {
        max = *std::max_element(this->_tab.begin(), this->_tab.end());
        min = *std::min_element(this->_tab.begin(), this->_tab.end());
        return max - min;
    }
    return 0;
}

void Span::addHuge(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (end - begin + this->_tab.size() > this->_size)
        throw std::exception();
    this->_tab.insert(this->_tab.end(), begin, end);
}
