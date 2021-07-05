/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:53 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 11:40:09 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant( void ); //cannonical
        SuperMutant( SuperMutant const & src ); //cannonical
        virtual ~SuperMutant(); //cannonical
        SuperMutant & operator=(  SuperMutant const & rhs ); //cannonical
        virtual void takeDamage( int damage );
};

#endif