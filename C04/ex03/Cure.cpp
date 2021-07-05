/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:36 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 16:12:03 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const& src) : AMateria("cure")
{
    *this = src;
    return;
}

Cure::~Cure(void) {}

Cure & Cure::operator=( Cure const& rhs )
{
    AMateria::operator=(rhs);
    return *this;
}

AMateria *Cure::clone(void) const
{
    Cure *cpy = new Cure(*this);
    return cpy;
}

void Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName()  << "’s wounds *" << std::endl;
}

