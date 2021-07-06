/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:47 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:01:41 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void ) : Enemy(80, "RadScorpion" )
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
    std::cout << "* click click click *" << std::endl;
    *this = src;
    return;
}

RadScorpion::~RadScorpion( void )
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs )
{
    if ( this != &rhs )
    {
        this->_type = rhs._type;
        this->_HP = rhs._HP;
    }
    return *this;
}
