/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:37:05 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/03 15:20:26 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( void )
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const& src )
{
    *this = src;
    return;
}

TacticalMarine::~TacticalMarine( void ) 
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine & TacticalMarine::operator=( TacticalMarine const& rhs)
{
    (void)rhs;
    return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
    ISpaceMarine *cpy = new TacticalMarine(*this);
    return cpy;
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attaque with chainsword *" << std::endl;
}