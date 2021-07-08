/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FatalWeapon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:55:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 12:06:49 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FATAL_WEAPON_HPP
# define FATAL_WEAPON_HPP

# include "AWeapon.hpp"

class FatalWeapon: public AWeapon
{
    public:
        FatalWeapon( void );
        FatalWeapon(FatalWeapon const & src);
        virtual ~FatalWeapon( void );

        FatalWeapon & operator=( FatalWeapon const & rhs );
        void attack() const;
};

#endif