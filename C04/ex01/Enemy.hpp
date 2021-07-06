/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:32 by rzafari           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/06 13:54:30 by rzafari          ###   ########.fr       */
=======
/*   Updated: 2021/07/06 09:56:46 by rzafari          ###   ########.fr       */
>>>>>>> 411c1962fd45b811d7ad625ebbaa774cf01d6faa
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