/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:10 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/04 15:24:26 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    bzero(&this->_cpy, sizeof(this->_cpy));
    return;
}

MateriaSource::MateriaSource(MateriaSource const & src) 
{
    *this = src;
    return;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_cpy[i];
        this->_cpy[i] = NULL;
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
       for (int i = 0; i < 4; i++)
        {
            delete this->_cpy[i];
            this->_cpy[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
            this->_cpy[i] = rhs._cpy[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* tocopy)
{
    if ( !tocopy )
        return;
    for (int i=0; i < 4; i++)
    {
        if (this->_cpy[i] == NULL)
        {    
            this->_cpy[i] = tocopy;
                return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for( int i=0; i < 4; i++)
    {
        if ( this->_cpy[i]->getType() == type )
            return (this->_cpy[i]->clone());
    }
    return 0;
}
