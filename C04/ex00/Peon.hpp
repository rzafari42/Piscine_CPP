/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:18 by rzafari           #+#    #+#             */
/*   Updated: 2021/05/31 20:06:50 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon( void );   //cannonial
        Peon( std::string name );
        Peon ( Peon const & src); //cannocial
        ~Peon ( void );     //cannoical
        
        void virtual getPolymorphed(void) const;
        Peon & operator=( Peon const & rhs); //cannonical
};

std::ostream  & operator<<( std::ostream & flux, Victim  const & rhs);

#endif