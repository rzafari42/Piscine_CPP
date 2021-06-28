/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 23:06:07 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 23:06:54 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <string>

class Karen
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Karen();
        ~Karen();

        void complain( std::string level );
};
#endif