/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:44 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 11:40:09 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist( void ); //cannonical
        PowerFist( PowerFist const & src ); //cannonical
        virtual ~PowerFist( void ); //cannonical
        PowerFist & operator=( PowerFist const & rhs ); //cannonical
        virtual void attack() const; 
};

#endif