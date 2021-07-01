/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:39 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/02 11:57:16 by rzafari          ###   ########.fr       */
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
        PlasmaRifle( void ); //cannocical
        PlasmaRifle( PlasmaRifle const & src ); //cannocical
        ~PlasmaRifle( void ); //cannocical
        PlasmaRifle & operator=( PlasmaRifle const & rhs ); //cannocical
        virtual void attack() const;
};

#endif