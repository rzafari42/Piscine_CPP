/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:51 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 15:23:17 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
} 

SuperMutant::SuperMutant( SuperMutant const & src )
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
    *this = src;
    return;
}

SuperMutant::~SuperMutant( void )
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator=(  SuperMutant const & rhs )
{
    if ( this != &rhs)
    {
        this->_type = rhs._type;
        this->_HP = rhs._HP;
    }
    return *this;
}

void SuperMutant::takeDamage( int damage )
{
    if (damage < 0)
        return;
    else if (this->_HP >= (damage - 3))
        this->_HP -= (damage - 3);
    return;
}