/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 14:12:53 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat b1("Negative", -2);
    Bureaucrat b2("TooHigh", 0);
    Bureaucrat b3("ToLow", 151);
    Bureaucrat b4("Correct", 5);
    
    Bureaucrat b5("LowLimit", 150);
    Bureaucrat b6("HighLimit", 1);


    b4.increment();
    std::cout << b4;
    b4.increment();
    std::cout << b4;
    b4.increment();
    std::cout << b4;
    b4.increment();
    std::cout << b4;
    b4.increment();

    std::cout << b5;
    b5.decrement();

    std::cout << b6;
    b6.increment();
    
    return 0;
}