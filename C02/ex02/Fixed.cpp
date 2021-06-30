/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:06 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/29 22:28:31 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fp( 0 )
{
}

Fixed::Fixed( const int val ) : _fp( val << this->_nb )
{
}

Fixed::Fixed( const float val ) : _fp( roundf( val * (1<< this->_nb))  )
{
}

Fixed::Fixed( Fixed const & src )
{
    *this = src;
    return ;
}

Fixed::~Fixed()
{
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
    if ( this != &rhs )
        this->_fp = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<( std::ostream & flux,  Fixed const & rhs )
{
    flux << rhs.toFloat();
    return flux;
}

bool Fixed::operator>( Fixed const & rhs ) const
{
    if ( this->_fp < rhs._fp )
        return true;
    else
        return false;
}

bool Fixed::operator<( Fixed const & rhs ) const
{
    if ( this->_fp > rhs._fp )
        return true;
    else
        return false;
}

bool Fixed::operator>=( Fixed const & rhs ) const
{
    if ( this->_fp <= rhs._fp )
        return true;
    else
        return false;
}

bool Fixed::operator<=( Fixed const & rhs ) const
{
    if ( this->_fp >= rhs._fp )
        return true;
    else
        return false;
}

bool Fixed::operator==( Fixed const & rhs ) const
{
    if ( this->_fp == rhs._fp )
        return true;
    else
        return false;
}

bool Fixed::operator!=( Fixed const & rhs ) const
{
    if ( this->_fp != rhs._fp )
        return true;
    else
        return false;
}

Fixed Fixed::operator+( Fixed const & rhs )
{
    this->_fp += rhs._fp;
    return *this;
}

Fixed Fixed::operator-( Fixed const & rhs )
{
    this->_fp -= rhs._fp;
    return *this;
}

Fixed Fixed::operator*( Fixed const & rhs )
{
    return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/( Fixed const & rhs )
{
    return (this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++( void )
{
    this->_fp++;
    return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed temp(*this);
    this->_fp++;
    return temp;
}

Fixed & Fixed::operator--( void )
{
    this->_fp--;
    return *this;
}

Fixed Fixed::operator--( int )
{
    Fixed temp(*this);
    this->_fp--;
    return temp;
}

Fixed & Fixed::min( Fixed &val1, Fixed &val2 )
{
    if ( val1._fp < val2._fp )
        return val1;
    return val2;
}

const Fixed & Fixed::min( const Fixed &val1, const Fixed &val2 )
{
    if ( val1._fp < val2._fp )
        return val1;
    return val2;
}

Fixed & Fixed::max( Fixed &val1, Fixed &val2 )
{
    if ( val1._fp > val2._fp )
        return val1;
    return val2;
}

const Fixed & Fixed::max( const Fixed &val1, const Fixed &val2 )
{
    if ( val1._fp > val2._fp )
        return val1;
    return val2;
}

const int Fixed::_nb = 8;

