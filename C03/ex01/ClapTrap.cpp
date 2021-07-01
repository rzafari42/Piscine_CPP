/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:06:17 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 20:02:02 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap () : _Hitpoints(10), _Energypoints(10), _Attackdamage(0)
{
    std::cout << "Default constructor called (ClapTrap Constructor)"  << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _Hitpoints(10), _Energypoints(10), _Attackdamage(0), _Name(name)
{
    std::cout << "Give me a second so I can reboot ! (By the way, I am the one and only ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap( unsigned int HitPoints, unsigned int Energypoints, unsigned int AttackDamage, std::string name ) : _Hitpoints(HitPoints), _Energypoints(Energypoints), _Attackdamage(AttackDamage), _Name(name)
{
    std::cout << "Hey !! you're back. You already know me, don't you ? I'm " << name << "!! (ClapTrap Constructor)" << std::endl;
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

std::string ClapTrap::getName() const
{
    return this->_Name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return this->_Hitpoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return this->_Energypoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return this->_Attackdamage;
}