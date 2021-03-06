/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:54 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 18:26:34 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap( void  );                              //canonical
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const &src );                //canonical
        ~ScavTrap( void );                              //canonical
        ScavTrap & operator=( ScavTrap const &rhs );    //canonical

        virtual void attack( std::string const & target );

        void  guardGate();
};

#endif