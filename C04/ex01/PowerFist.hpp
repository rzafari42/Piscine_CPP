/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:44 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/01 16:05:34 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFirst : public AWeapon
{
    public:
        PowerFirst( void ); //cannocical
        PowerFirst( PowerFirst const & src ); //cannocical
        ~PowerFirst( void ); //cannocical
        PowerFirst & operator=( PowerFirst const & rhs ); //cannocical
        virtual void attack() const; 
};

#endif