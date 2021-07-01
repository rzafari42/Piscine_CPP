/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:29 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/03 22:36:38 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    private:
        unsigned int        _xp;
        std::string const   _type;
    public:
        AMateria(void);
        AMateria(AMateria const& src);
        virtual ~AMateria();
        AMateria & operator=( AMateria const& rhs );

        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        unsigned int getXP() const; //Returns the Materia's XP
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif