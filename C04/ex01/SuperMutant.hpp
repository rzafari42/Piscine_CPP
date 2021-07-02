/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:53 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 15:34:21 by rzafari          ###   ########.fr       */
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
        SuperMutant( void ); //cannocical
        SuperMutant( SuperMutant const & src ); //cannocical
        virtual ~SuperMutant(); //cannocical
        SuperMutant & operator=(  SuperMutant const & rhs ); //cannocical
        virtual void takeDamage( int damage );

};

#endif