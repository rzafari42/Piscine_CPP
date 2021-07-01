/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:41 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/02 12:55:27 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFirst::PowerFirst( void ) : AWeapon( "Power Fist", 8, 50 )
{
}

PowerFirst::PowerFirst( PowerFirst const & src ) : AWeapon( "Power Fist", 8, 50 )
{
    *this = src;
    return;
}

PowerFirst::~PowerFirst( void )
{
}

void    PowerFirst::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFirst & PowerFirst::operator=( PowerFirst const & rhs )
{
    if ( this != &rhs )
    {
        this->_Name = rhs._Name;
        this->_Damage = rhs._Damage;
        this->_AP_cost = rhs._AP_cost;
    }
    return *this;
}

