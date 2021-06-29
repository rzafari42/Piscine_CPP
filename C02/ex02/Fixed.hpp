/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:09 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/29 22:26:27 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>
# include <stdbool.h>

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
        bool operator>( Fixed const & rhs ) const;
        bool operator<( Fixed const & rhs ) const;
        bool operator>=( Fixed const & rhs ) const;
        bool operator<=( Fixed const & rhs ) const;
        bool operator==( Fixed const & rhs ) const;
        bool operator!=( Fixed const & rhs ) const;
        Fixed operator+( Fixed const & rhs );
        Fixed operator-( Fixed const & rhs );
        Fixed operator*( Fixed const & rhs );
        Fixed operator/( Fixed const & rhs );
        
        Fixed & operator++( void );
        Fixed operator++( int val );
        Fixed & operator--( void );
        Fixed operator--( int val );
        static Fixed &min( Fixed &val1, Fixed &val2 );
        static Fixed &max( Fixed &val1, Fixed &val2 );
        static const Fixed &min( const Fixed &val1, const Fixed &val2 );
        static const Fixed &max( const Fixed &val1, const Fixed &val2 );
};

Fixed &min( Fixed &val1, Fixed &val2 );
const Fixed &min( const Fixed &val1, const Fixed &val2 );

Fixed &max( Fixed &val1, Fixed &val2 );
const Fixed &max( const Fixed &val1, const Fixed &val2 );


std::ostream & operator<<( std::ostream & flux,  Fixed const & rhs );

#endif
