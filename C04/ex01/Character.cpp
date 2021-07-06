/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:25 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:09:42 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
}

Character::Character(std::string const & name) : _Name(name), _AP(40), _aweapon(NULL)
{

}

Character::Character( Character const & src )
{
    *this = src;
    return;
}

Character::~Character( void )
{
}

Character & Character::operator=( Character const & rhs)
{
    if (this != &rhs)
    {
        this->_Name = rhs._Name;
        this->_AP = rhs._AP;
        this->_aweapon = rhs._aweapon;
    }
    return *this;
}

void Character::recoverAP()
{
    if (this->_AP + 10 < 40) 
        this->_AP += 10;
    else
        this->_AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    this->_aweapon = weapon;
}

void Character::attack(Enemy *&enemy)
{
    if (!this->_aweapon || !enemy)
        return;
    if (this->_AP < this->_aweapon->getAPCost())
        return;
    std::cout << this->_Name << " attacks " << enemy->getType() << " with a " << this->_aweapon->getName() << std::endl;
    
    this->_AP -= this->_aweapon->getAPCost();
    this->_aweapon->attack();
    enemy->takeDamage(this->_aweapon->getDamage());
    if (enemy->getHP() <= 0)
    {
        delete enemy;
        enemy = NULL;
    }
}

std::ostream  & operator<<( std::ostream & flux, Character  const & rhs)
{
    if (rhs.getWeapon())
        flux << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() <<  std::endl;
    else
        flux << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
    return flux;
}

std::string Character::getName() const
{
    return this->_Name;
}

AWeapon *Character::getWeapon(void) const
{
    return this->_aweapon;
}

int Character::getAP( void ) const
{
    return this->_AP;
}
