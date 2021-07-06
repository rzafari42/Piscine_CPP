/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:32 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 14:17:52 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
    protected:
        int    _HP;
        std::string     _type;
        Enemy( void ); //cannonical
        
    public:
        Enemy( Enemy const & src ); //cannonical
        Enemy(int hp, std::string const & type);
        virtual ~Enemy(); //cannonical
        std::string virtual getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);
        Enemy & operator=( Enemy const & rhs ); //cannonical
};

#endif