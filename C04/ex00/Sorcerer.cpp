/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:16 by rzafari           #+#    #+#             */
/*   Updated: 2021/05/31 20:19:12 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void )
{
    std::cout << "Default constructor ! (this text should not be printed)" << std::endl;
}

void Sorcerer::birthannoucement( void )
{
    std::cout << std::uppercase << this->_name << ", " << std::uppercase << this->_type << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string type ) : _name(name), _type(type)
{
    birthannoucement();
}

Sorcerer::Sorcerer( Sorcerer const &src )
{
    *this = src;
    return;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs)
{
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}

Sorcerer::~Sorcerer( void )
{
    std::cout << std::uppercase << this->_name << ", " << std::uppercase << this->_type << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream & operator<<( std::ostream & flux,  Sorcerer const & rhs )
{
    flux <<  "I am " << std::uppercase << rhs.namegetter() << ", " << std::uppercase << rhs.typegetter() << ", and I like ponies!" << std::endl;
    return flux;
}

std::string Sorcerer::namegetter( void ) const
{
    return this->_name;
}

std::string Sorcerer::typegetter( void ) const
{
    return this->_type;
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}