/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:39 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 11:40:09 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle( void ); //cannonical
        PlasmaRifle( PlasmaRifle const & src ); //cannonical
        virtual ~PlasmaRifle( void ); //cannonical
        PlasmaRifle & operator=( PlasmaRifle const & rhs ); //cannonical
        virtual void attack() const;
};

#endif