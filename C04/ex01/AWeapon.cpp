/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:21 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 15:24:21 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( void )
{
}

AWeapon::AWeapon( AWeapon const & src )
{
    *this = src;
    return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _Name(name), _AP_cost(apcost), _Damage(damage)
{
}

AWeapon::~AWeapon( void )
{
}

AWeapon & AWeapon::operator=( AWeapon const & rhs )
{
    if ( this != &rhs )
    {
        this->_Name = rhs._Name;
        this->_Damage = rhs._Damage;
        this->_AP_cost = rhs._AP_cost;
    }
    return *this;
}

std::string AWeapon::getName() const
{
    return this->_Name;
}

int AWeapon::getAPCost() const
{
    return this->_AP_cost;
}

int AWeapon::getDamage() const
{
    return this->_Damage;
}
