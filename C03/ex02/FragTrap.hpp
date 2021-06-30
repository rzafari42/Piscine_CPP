/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:10:54 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 19:02:11 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void  );                              //canonical
        FragTrap( std::string name );
        FragTrap( FragTrap const &src );                //canonical
        ~FragTrap( void );                              //canonical
        FragTrap & operator=( FragTrap const &rhs );    //canonical

        void highFivesGuys(void);
};

#endif