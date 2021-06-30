/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:50 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 17:01:33 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( 100, 50, 20 )
{
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20 )
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
    {
        this->_Name = rhs._Name;
        this->_Hitpoints = rhs._Hitpoints;
        this->_Energypoints = rhs._Energypoints;
        this->_Attackdamage = rhs._Attackdamage;
    }
    return *this;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap( 100, 50, 20 )
{
    *this = src;
    return ;
}

void  ScavTrap::guardGate()
{
    std::cout << this->_Name << " has enterred in Gate keeper" << std::endl;
}
