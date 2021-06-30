/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:50 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 19:59:20 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap(100, 100, 30, "Default")
{
}

FragTrap::FragTrap( std::string name ) : ClapTrap(100, 100, 30, name)
{
    std::cout << "Let's get this party started !! (FragTrap Constructor)" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Bye my friend ! (FragTrap Destructor)" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) 
{
    if ( this != &rhs )
        ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::FragTrap( FragTrap const &src )
{
    *this = src;
    return ;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hey !! Would you give me an high five ??" << std::endl;
}