/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:20:12 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:55:28 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory address of the string: " << &str << std::endl;
    std::cout << "Using Pointer:                " << &*stringPTR << std::endl;
    std::cout << "Using Reference:              " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "String value w/ Pointer:   " << *stringPTR << std::endl;
    std::cout << "String value w/ Reference: " << stringREF << std::endl;
    return 0;
}