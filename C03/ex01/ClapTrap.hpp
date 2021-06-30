/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:06:20 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 16:19:22 by rzafari          ###   ########.fr       */
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
        std::string         _Name;
        unsigned int        _Hitpoints;
        unsigned int        _Energypoints;
        unsigned int        _Attackdamage;

    protected:
        ClapTrap( );                                    //canonical
    public:
        ClapTrap( std::string name );                           
        ClapTrap( ClapTrap const &src );                //canonical
        ~ClapTrap( void );                              //canonical
        ClapTrap & operator=( ClapTrap const &rhs );    //canonical

        void attack( std::string const & target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif