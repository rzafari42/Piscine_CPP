/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadRabbits.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:22:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 12:07:03 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BadRabbits.hpp"

BadRabbits::BadRabbits( void ) : Enemy(100, "Bad Rabits")
{
    std::cout << "Ahhhhhhhhhhhhhhhhhh" << std::endl;
} 

BadRabbits::BadRabbits( BadRabbits const & src )
{
    std::cout << "Ahhhhhhhhhhhhhhhhhh" << std::endl;
    *this = src;
    return;
}

BadRabbits::~BadRabbits( void )
{
    std::cout << "Noooo ..." << std::endl;
}

BadRabbits & BadRabbits::operator=(  BadRabbits const & rhs )
{
    if ( this != &rhs)
    {
        this->_type = rhs._type;
        this->_HP = rhs._HP;
    }
    return *this;
}

void BadRabbits::takeDamage( int damage )
{
    if (damage < 0)
        return;
    else if (this->_HP >= (damage - 8))
        this->_HP -= (damage - 8);
    return;
}