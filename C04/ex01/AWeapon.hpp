/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:19 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 09:54:10 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <string>

class AWeapon
{
    protected:
        AWeapon( void );                            //canonical
        std::string  _Name;
        int _AP_cost;
        int _Damage;

    public:
        AWeapon( AWeapon const & src );             //canonical
        AWeapon(std::string const & name, int apcost, int damage);
        virtual ~AWeapon();                         //canonical
        std::string virtual getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
        AWeapon & operator=( AWeapon const & rhs ); //canonical
};

#endif