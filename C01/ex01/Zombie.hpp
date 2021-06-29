/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:41:47 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:44:54 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string.h>
# include <cstring>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie();
        ~Zombie( void );
        
        void announce( void );
        void setname(std::string name);
};

Zombie *zombieHorde( int N, std::string nasme );
std::string randomName(std::string name);

#endif