/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:04:13 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:58:19 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"


class HumanB
{
    private:
        std::string _name;
        Weapon *_weapon;
    public:
        HumanB( std::string name );
        ~HumanB();
        void attack() const;
        void setWeapon( Weapon &weapon );
};

#endif