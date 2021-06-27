/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:42:50 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:58:27 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) : _type(weapon)
{
}

Weapon::~Weapon( void )
{
}

void Weapon::setType( std::string type )
{
    this->_type = type;
}


std::string Weapon::getType() const
{
    return this->_type;
}