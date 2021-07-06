/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:28 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:05:59 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
    private:
        std::string         _Name;
        int                 _AP;
        AWeapon             *_aweapon;
        Character( void ); //cannonical
    public:
        Character( Character const & src ); //cannonical
        Character(std::string const & name);
        virtual ~Character( void ); //cannonical
        
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(Enemy *&enemy);

        std::string getName() const;
        AWeapon *getWeapon(void) const;
        int getAP(void) const;


        Character & operator=( Character const & rhs); //cannonical
};

std::ostream  & operator<<( std::ostream & flux, Character const & rhs);

#endif