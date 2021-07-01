/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:38:37 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 16:45:21 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const& src )
{
    *this = src;
    return;
}

AssaultTerminator::~AssaultTerminator( void ) 
{
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const& rhs)
{
    (void)rhs;
    return *this;
}


ISpaceMarine* AssaultTerminator::clone() const
{
    AssaultTerminator *cpy = new AssaultTerminator(*this);
    return cpy;
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attaque with chainfists *" << std::endl;
}