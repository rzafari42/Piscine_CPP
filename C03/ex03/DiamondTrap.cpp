/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:14:09 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 20:34:47 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(100, 50, 30, "Default")
{
    std::cout << "Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) :  ClapTrap(100, 50, 30, name + "_clap_name"), _Name(name)
{
    std::cout << "I'am as weird as a diamod can be (DiamondTrap Constructor)" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const& src )
{
    *this = src;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "I have to go ! by (DiamondTrap destructor)" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
    if ( this != &rhs )
    {
        ClapTrap::operator=(rhs);
        this->_Name = rhs._Name;
    }
    return *this;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My Diamond Name is: " << this->_Name << ".\nClapTrap name is: " <<  this->getName() << std::endl;
}
