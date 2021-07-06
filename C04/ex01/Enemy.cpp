/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:30 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:05:56 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void )
{
}

Enemy::Enemy( Enemy const & src )
{
    *this = src;
    return;
}

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _type(type)
{
}

Enemy::~Enemy()
{
}

Enemy & Enemy::operator=( Enemy const & rhs )
{
    if ( this != &rhs )
    {
        this->_HP = rhs._HP;
        this->_type = rhs._type;
    }
    return *this;
}

std::string Enemy::getType() const
{
    return this->_type;
}

int Enemy::getHP() const
{
    return this->_HP;
}

void Enemy::takeDamage( int damage )
{
    if (damage > 0 && this->_HP >= 0)
        this->_HP -= damage;
}