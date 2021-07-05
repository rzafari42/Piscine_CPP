/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:26 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 22:20:23 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _xp(0)
{
}

AMateria::AMateria( AMateria const& src ) :  _xp(0)
{
    *this = src;
    return;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::~AMateria(void) {}

AMateria & AMateria::operator=( AMateria const& rhs)
{
    if (this != &rhs)
        this->_xp = rhs._xp;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    this->_xp += 10;
}