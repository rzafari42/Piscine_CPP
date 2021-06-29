/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:57:06 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/29 15:20:22 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ) : _fp( 0 )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src )
{ 
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fp;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fp = raw;
}

Fixed & Fixed::operator=( Fixed const & rhs ) 
{
    std::cout << "Assignation operator called" << std::endl;
    if ( this != &rhs )
        this->_fp = rhs.getRawBits();
    return *this;
}

const int Fixed::_nb = 8;

int main(void) {
    Fixed a;
    Fixed b(a);
    Fixed c;
    
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    std::cout << "Let's set some raw bits ..." << std::endl;
    a.setRawBits(8);
    b.setRawBits(18);
    c.setRawBits(2);
    std::cout << "Now we have ..." << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}