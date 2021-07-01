/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:41 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 15:46:53 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon( "Power Fist", 8, 50 )
{
}

PowerFist::PowerFist( PowerFist const & src ) : AWeapon( "Power Fist", 8, 50 )
{
    *this = src;
    return;
}

PowerFist::~PowerFist( void )
{
}
void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist & PowerFist::operator=( PowerFist const & rhs )
{
    if ( this != &rhs )
    {
        this->_Name = rhs._Name;
        this->_Damage = rhs._Damage;
        this->_AP_cost = rhs._AP_cost;
    }
    return *this;
}

