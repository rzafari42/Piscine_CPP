/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:21 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 12:40:03 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
    private:
        Sorcerer( void );   //cannocical
        std::string _name;
        std::string _title;
        void birthannoucement( void );

    public:
        Sorcerer ( Sorcerer const &src );               //cannocical
        Sorcerer( std::string name, std::string title );
        ~Sorcerer ( void );                             //cannocical
        Sorcerer & operator=( Sorcerer const & rhs );   //cannocical

        std::string namegetter( void ) const;
        std::string titlegetter( void ) const;

        void polymorph(Victim const &) const;
};

std::ostream & operator<<( std::ostream & flux,  Sorcerer const & rhs );

#endif