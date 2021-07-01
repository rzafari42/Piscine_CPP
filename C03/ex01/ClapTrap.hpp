/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:06:20 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 19:09:56 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
    private:
        unsigned int        _Hitpoints;
        unsigned int        _Energypoints;
        unsigned int        _Attackdamage;
        std::string         _Name;
    
    public:
        ClapTrap();                                    //canonical
        ClapTrap( std::string name );
        ClapTrap( unsigned int HitPoints, unsigned int Energypoints, unsigned int AttackDamage, std::string name );
        ClapTrap( ClapTrap const &src );                //canonical
        ~ClapTrap( void );                              //canonical
        ClapTrap & operator=( ClapTrap const &rhs );    //canonical

        virtual void attack( std::string const & target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;
};

#endif