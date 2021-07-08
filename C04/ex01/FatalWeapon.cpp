/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FatalWeapon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:56:02 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 12:06:47 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FatalWeapon.hpp"

FatalWeapon::FatalWeapon( void ) : AWeapon( "Fatal Weapon", 20, 70 )
{
}

FatalWeapon::FatalWeapon( FatalWeapon const & src) : AWeapon( "Fatal Weapon", 20, 70 )
{
    *this = src;
    return;
}

FatalWeapon::~FatalWeapon( void )
{
}

void FatalWeapon::attack() const
{
    std::cout << "* BANGG !!! *" << std::endl;
}

FatalWeapon & FatalWeapon::operator=( FatalWeapon const & rhs )
{
    if ( this != &rhs )
    {
        this->_Name = rhs._Name;
        this->_Damage = rhs._Damage;
        this->_AP_cost = rhs._AP_cost;
    }
    return *this;
}
