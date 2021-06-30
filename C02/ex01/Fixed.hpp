/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:09 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 13:51:53 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int _fp;
        const static int  _nb;

    public:
        Fixed( void );                          //canonical
        Fixed( Fixed const & src );             //canonical
        Fixed( const int val );
        Fixed( const float val );
        ~Fixed( void );                         //canonical

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed & operator=( Fixed const & rhs ); //canonical
};

std::ostream & operator<<( std::ostream & flux,  Fixed const & rhs );

#endif