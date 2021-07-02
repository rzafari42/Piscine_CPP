/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 12:42:08 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/02 12:46:06 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORE_HPP
# define More_HPP
# include "Victim.hpp"

class   More: public Victim
{
    private:
        std::string _Name;
    public:
        More();
        ~More();
        More(std::string name);
        More(More const& src);
        More & operator=(More const& rhs);

        std::string namegetter( void ) const;
        void virtual getPolymorphed(void) const;
};

#endif