/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadRabbits.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:21:33 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 14:27:56 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BADRABBITS_HPP
# define BADRABBITS_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class BadRabbits : public Enemy
{
    public:
        BadRabbits( void ); //cannonical
        BadRabbits( BadRabbits const & src ); //cannonical
        virtual ~BadRabbits(); //cannonical
        BadRabbits & operator=(  BadRabbits const & rhs ); //cannonical
        
        virtual void takeDamage( int damage );
};

#endif