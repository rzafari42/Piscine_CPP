/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:40 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/04 14:05:13 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const& src) : AMateria("ice")
{
    *this = src;
    return;
}

Ice::~Ice(void) {}

Ice & Ice::operator=( Ice const& rhs )
{
    AMateria::operator=(rhs);
    return *this;
}

AMateria *Ice::clone(void) const
{
    Ice *cpy = new Ice(*this);
    return cpy;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}