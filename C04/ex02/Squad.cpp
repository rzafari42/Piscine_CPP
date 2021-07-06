/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:36:33 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:27:14 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) : _count(0) , _unit(NULL) 
{
    return;
}

Squad::Squad( Squad const & src )
{
    *this = src;
    return;
}

Squad::~Squad( void )
{
	int i = 0;
    
    if (this->_unit)
	{
		for (i = 0; i < this->_count; i++)
        {
            delete this->_unit[i];
            this->_unit[i] = NULL;
        }
        delete [] this->_unit;
        this->_unit = NULL;
	}
	return ;
}

Squad & Squad::operator=( Squad const & rhs )
{
    int i;

    if ( this->_unit )
    {
        for (i = 0; i < this->_count; i++)
        {
            delete this->_unit[i];
            this->_unit[i] = NULL;
        }
        delete [] this->_unit;
        this->_unit = NULL;
    }
    if ( this != &rhs )
        this->_count = rhs._count;
    if ( rhs._unit )
    {
        this->_unit = new ISpaceMarine*[rhs._count];
        for (i = 0; i < this->_count; i++)
            this->_unit[i] = rhs._unit[i];
    }
    return *this;
}

int Squad::getCount( void ) const
{
    return this->_count;
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if ( n < 0 || n > this->_count )
        return NULL;
    return this->_unit[n];
}

int Squad::push(ISpaceMarine* addunit)
{
    int i;

    if (addunit == NULL)
        return -1;

    for (i = 0; i < this->_count; i++)
    {
        if (this->_unit[i] == addunit)
            return -1;
    }
    ISpaceMarine** replace = new ISpaceMarine*[this->_count + 1];
    for (i = 0; i < this->_count; i++)
    {
        replace[i] = this->_unit[i];
        this->_unit[i] = NULL;
    }
    replace[this->_count] = addunit;
    delete [] this->_unit;
    this->_unit = NULL;
    this->_unit = replace;
    this->_count += 1;
    
    return this->_count;
}
