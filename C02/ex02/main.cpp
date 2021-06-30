/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:44:29 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/30 14:11:02 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10);

    std::cout << "a: " <<  a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "Max: " << Fixed::max(a, b) << std::endl;
    std::cout << "Min: " << Fixed::min(a, b) << std::endl;
    std::cout << "Max: " << max(a, b) << std::endl;
    std::cout << "Min: " << min(a, b) << std::endl;

    std::cout << "c: " << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;

    Fixed d(10);
    Fixed e(2);
    std::cout << d * e << std::endl;
    std::cout << d / e << std::endl;

    return 0;
}