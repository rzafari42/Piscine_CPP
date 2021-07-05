/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:35:47 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 12:27:32 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{
    private:
        int _count;
        ISpaceMarine** _unit;
    public:
        Squad( void );
        Squad ( Squad const & src );
        virtual ~Squad ( void );
        Squad & operator=( Squad const & rhs );

        virtual int getCount() const; 
        virtual ISpaceMarine* getUnit(int n) const;
        virtual int push(ISpaceMarine* addunit);
};

#endif