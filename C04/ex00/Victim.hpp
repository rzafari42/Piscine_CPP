/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:23:27 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 14:13:31 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_HPP
# define Victim_HPP
# include <iostream>
# include <string>

class Victim
{
    protected:
        Victim ( void );
        void birthannoucement( void );
        std::string _name;

    public:
        Victim ( Victim const & src );  //canonical
        Victim ( std::string name );
        virtual ~Victim( void );                //canoical
        Victim & operator=( Victim const & rhs );   //canonical

        std::string namegetter( void ) const;
        void virtual getPolymorphed(void) const;
};

std::ostream & operator<<( std::ostream & flux, Victim const & rhs);

#endif