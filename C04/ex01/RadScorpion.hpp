/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:49 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 15:50:37 by rzafari          ###   ########.fr       */
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
        RadScorpion( void ); //cannocical
        RadScorpion( RadScorpion const & src ); //cannocical
        ~RadScorpion( void ); //cannocical
        RadScorpion & operator=( RadScorpion const & rhs ); //cannocical
};

#endif