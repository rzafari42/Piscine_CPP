/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:06 by rzafari           #+#    #+#             */
/*   Updated: 2021/05/19 20:23:32 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fp( 0 )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val ) : _fp( val << this->_nb )
{
    std::cout << "Const int constructor called" << std::endl;
}

Fixed::Fixed( const float val ) : _fp( roundf( val * (1<< this->_nb))  )
{
    std::cout << "Const float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return this->_fp;
}

void Fixed::setRawBits( int const raw )
{
    this->_fp = raw;
}

float Fixed::toFloat( void ) const
{
    return ( (float)(this->_fp) / (1 << this->_nb) );
}

int Fixed::toInt( void ) const
{
    return ( this->_fp >> this->_nb );
}

Fixed & Fixed::operator=( Fixed const & rhs ) 
{
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->_fp = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<( std::ostream & flux,  Fixed const & rhs )
{
    flux << rhs.toFloat();
    return flux;
} 

const int Fixed::_nb = 8;

int main(void) {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);
    a = Fixed(1234.4321f);
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}