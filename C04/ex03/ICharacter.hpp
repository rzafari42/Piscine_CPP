/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:56:45 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/05 14:48:20 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARATER_HPP
# define ICHARATER_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter &target) = 0;
};

#endif