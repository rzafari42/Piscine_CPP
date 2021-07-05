/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:42 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 14:48:17 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"


class Ice: public AMateria
{
    public:
        Ice(void);
        Ice(Ice const& src);
        virtual ~Ice(void);
        Ice & operator=( Ice const& rhs );

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif