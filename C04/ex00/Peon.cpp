/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:13 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 14:41:04 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
    return;
}

Peon::Peon( std::string name ) : Victim (name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src)
{
    *this = src;
    return;
}

Peon::~Peon( void )
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed( void ) const 
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=( Peon const & rhs)
{
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}
