/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:42:47 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:58:24 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon( std::string weapon );
        ~Weapon();
        void setType( std::string type );
        std::string const& getType();
};

#endif