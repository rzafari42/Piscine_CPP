/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:50 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 20:02:17 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( 100, 50, 20, "Default" )
{
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( 100, 50, 20, name )
{
    std::cout << "Hey there ! What the f**ck are you doing ?! (ScavTrap Constructor)" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Hope I'll never see you again ! (ScavTrap Destructor)" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
    if ( this != &rhs )
        ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::ScavTrap( ScavTrap const &src )
{
    *this = src;
    return ;
}

void ScavTrap::attack( std::string const & target )
{
    std::cout << "Scav-Trap "<< this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage " << std::endl;
}

void  ScavTrap::guardGate()
{
    std::cout << this->getName() << " has enterred in Gate keeper" << std::endl;
}
