/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:15:46 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 09:48:28 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "More.hpp"

More::More() : _Name("more")
{
}

More::~More()
{
    std::cout << "Deuh...." << std::endl;
}

More::More(std::string name) : Victim(name), _Name(name)
{
    std::cout << "Hey !! I am " << this->_Name << std::endl;
}

More::More( More const& src )
{
    std::cout << "Hey !! I am " << this->_Name << std::endl;
    *this = src;
    return;
}

More & More::operator=(More const& rhs)
{
    if (this != &rhs)
        this->_Name = rhs._Name;
    return *this;
}

std::string More::namegetter( void ) const
{
    return this->_Name;
}

void  More::getPolymorphed(void) const
{
    std::cout << this->_Name << " has been turned into a weird, horrible little thing" << std::endl;
}