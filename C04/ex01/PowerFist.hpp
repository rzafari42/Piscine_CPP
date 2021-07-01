/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:44 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 15:46:59 by rzafari          ###   ########.fr       */
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
        PowerFist( void ); //cannocical
        PowerFist( PowerFist const & src ); //cannocical
        ~PowerFist( void ); //cannocical
        PowerFist & operator=( PowerFist const & rhs ); //cannocical
        virtual void attack() const; 
};

#endif