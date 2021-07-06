/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 11:57:12 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/01 17:28:10 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <string>
# include <strings.h>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_cpy[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & rhs);

        virtual void learnMateria(AMateria* tocopy);
        virtual AMateria* createMateria(std::string const & type);
};

#endif