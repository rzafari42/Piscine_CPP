/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:43:00 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:58:21 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
    private:    
        std::string _name;
        Weapon &_weapon;
    public:
        HumanA( std::string name, Weapon & weapon );
        ~HumanA();
        void attack() const;
};

#endif