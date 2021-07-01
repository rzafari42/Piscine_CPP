/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:32 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/04 13:15:37 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    bzero(&this->_invent, sizeof(this->_invent));
    return;
}

Character::Character(std::string name) : _name(name)
{
    bzero(&this->_invent, sizeof(this->_invent));
    return;
}

Character::Character(Character const& src)
{
    *this = src;
    return;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_invent[i];
        this->_invent[i] = NULL;
    }
}

Character &Character::operator=( Character const& rhs )
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
        {
            delete this->_invent[i];
            this->_invent[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
            this->_invent[i] = rhs._invent[i];
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (this->_invent[i] == NULL)
        {
            this->_invent[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    else
        this->_invent[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        return;
    else if (this->_invent[idx] != NULL)
        this->_invent[idx]->use(target);
}