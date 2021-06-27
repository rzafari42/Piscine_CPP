/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:41:43 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:45:27 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie( void )
{
    std::cout << "<" << this->_name << "> Destructor..." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << "A new member joined the horde !!" << std::endl;
    std::cout  << "I am " << "\e[32m" << this->_name << "\e[m" << std::endl;
    std::cout << std::endl;
}

void Zombie::setname( std::string name)
{
    this->_name = name;
}

std::string randomName(std::string name)
{
    int pos;
    std::string givenname;

    std::string randname[] = {"James", "Ava" , "Jack", "April", "Carter", "Jonh", "Ginny", "Marie", "Sophia", "Amelia"};
    pos = std::rand() % 10;
    givenname = std::strcat((char *)name.c_str() , randname[ pos ].c_str());
    return givenname;
}