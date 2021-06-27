/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:42:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:58:20 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon( Weapon  &weapon )
{
    this->_weapon = &weapon;
}

void HumanB::attack() const
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}