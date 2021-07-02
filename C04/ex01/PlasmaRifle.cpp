/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:37 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 15:24:03 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon( "Plasma Rifle", 5, 21 )
{
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) : AWeapon( "Plasma Rifle", 5, 21 )
{
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle( void )
{
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
    if ( this != &rhs )
    {
        this->_Name = rhs._Name;
        this->_Damage = rhs._Damage;
        this->_AP_cost = rhs._AP_cost;
    }
    return *this;
}
