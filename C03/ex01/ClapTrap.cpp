/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:06:17 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 16:44:12 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ) : _Hitpoints(100), _Energypoints(50), _Attackdamage(20)
{
    std::cout << "Default constructor called (ClapTrap Constructor)"  << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Name(name), _Hitpoints(100), _Energypoints(50), _Attackdamage(20)
{
    std::cout << "Here I am (" << name << ")!! (ClapTrap Constructor)" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Ciao (" << this->_Name << ")  (ClapTrap Destructor)" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) 
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

ClapTrap::ClapTrap( ClapTrap const &src )
{
    *this = src;
    return;
}

void ClapTrap::attack( std::string const & target )
{
    std::cout << "FR4G-TP "<< this->_Name << " attacks " << target << ", causing " << this->_Attackdamage << " points of damage " << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << this->_Name << " took some damage ..." << std::endl;
    
    if ( this->_Hitpoints >= amount )
        this->_Hitpoints -= amount;
    else
        this->_Hitpoints = 0;
    if ( this->_Energypoints >= amount )
        this->_Energypoints -= amount;
    else
        this->_Energypoints = 0;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << this->_Name << " need to be repaired ..." << std::endl;

    this->_Energypoints += amount;
    this->_Hitpoints += amount;
}
