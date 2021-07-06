/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:38 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 10:43:53 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure(void);
        Cure(Cure const& src);
        virtual ~Cure(void);
        Cure & operator=( Cure const& rhs );

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif