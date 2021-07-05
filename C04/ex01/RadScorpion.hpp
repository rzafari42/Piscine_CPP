/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:49 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 11:43:11 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion( void ); //cannonical
        RadScorpion( RadScorpion const & src ); //cannonical
        virtual ~RadScorpion( void ); //cannonical
        RadScorpion & operator=( RadScorpion const & rhs ); //cannonical
};

#endif