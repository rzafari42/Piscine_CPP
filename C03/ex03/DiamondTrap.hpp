/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:14:28 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 20:38:13 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _Name;
    public:
        DiamondTrap(); //canonical
        DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const& src ); //canonical
        ~DiamondTrap(); //canonical

        DiamondTrap & operator=( DiamondTrap const& rhs ); //canonical

        void attack(std::string const & target);

        void whoAmI();
};

#endif