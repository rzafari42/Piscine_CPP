/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:06:32 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/01 14:29:46 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
    private:
    protected:
        int    _HP;
        std::string     _type;
        Enemy( void ); //cannocical
        
    public:
        Enemy( Enemy const & src ); //cannocical
        Enemy(int hp, std::string const & type);
        virtual ~Enemy(); //cannocical
        std::string virtual getType() const;
        int getHP() const;
        virtual void takeDamage(int damage);
        Enemy & operator=( Enemy const & rhs ); //cannocical
};

#endif