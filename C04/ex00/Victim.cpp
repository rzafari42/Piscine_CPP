/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:25 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 09:46:25 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim ( void )
{
    std::cout << "Default constructor ! (this text should not be printed)" << std::endl;
}

void Victim::birthannoucement( void )
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim( std::string name ) : _name(name)
{
    birthannoucement();
}

Victim::~Victim( void )
{
    std::cout << "Victim " << this->_name << " just died for no apparent reasons!" << std::endl;
}

std::string Victim::namegetter( void) const
{
    return this->_name;
}

std::ostream  & operator<<( std::ostream & flux, Victim  const & rhs)
{
    flux <<  "I'm " << rhs.namegetter() << " and I like otters!" <<  std::endl;
    return flux;
}

void Victim::getPolymorphed( void ) const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim( Victim const & src )
{
    *this = src;
    return ;
}

Victim & Victim::operator=( Victim const & rhs)
{
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}