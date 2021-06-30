/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:09 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 11:39:38 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
    private:
        int _fp;
        const static int _nb;
    public:
        Fixed( void );                          //canonical
        Fixed( Fixed const & src );             //canonical
        ~Fixed( void );                         //canonical

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed & operator=( Fixed const & rhs ); //canonical
};

#endif