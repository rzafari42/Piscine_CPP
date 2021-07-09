/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:05:18 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 13:46:28 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    int a = 4;
    int b = 10;
    float c  = 4.5;
    float d  = 10.5;
    char e = 'a';
    char f = 'b';
    int i = 185000;
    int j = 185000;

    std::string s1 = "Hello";
    std::string s2 = "Bonjour";


	std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;
    std::cout << "SWAP:" << std::endl;
    std::cout << "Before -> v1: " << a << "; v2: " << b << std::endl;
    ::swap(a, b);
    std::cout << "After -> v1: " << a << "; v2: " << b << std::endl;
    std::cout << "Before -> v1: " << c << "; v2: " << d << std::endl;
    ::swap(c, d);
    std::cout << "After -> v1: " << c << "; v2: " << d << std::endl;
    std::cout << "Before -> v1: " << e << "; v2: " << f << std::endl;
    ::swap(e, f);
    std::cout << "After -> v1: " << e << "; v2: " << f << std::endl;
    std::cout << "Before -> v1: " << s1 << "; v2: " << s2 << std::endl;
    ::swap(s1, s2);
    std::cout << "After -> v1: " << s1 << "; v2: " << s2 << std::endl;
	std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;



    std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;
    std::cout << "MIN:" << std::endl;
    std::cout << "v1: " << a << ", v2: " << b << std::endl;
    std::cout << "min= " << ::min(a, b) << std::endl;
    std::cout << "v1: " << c << ", v2: " << d << std::endl;
    std::cout << "min= " << ::min(c, d) << std::endl;
    std::cout << "v1: " << e << ", v2: " << f << std::endl;
    std::cout << "min= " << ::min(e, f) << std::endl;

    std::cout << "v1: " << i << ", v2: " << j << std::endl;
    std::cout << "min= " << ::min(i, j) << std::endl;
    std::cout << "v1: " << s1 << ", v2: " << s2 << std::endl;
    std::cout << "min= " << ::min(s1, s2) << std::endl;
    std::cout << "std min= " << std::min(s1, s2) << std::endl;
	std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;


    std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;
    std::cout << "MAX:" << std::endl;
    std::cout << "v1: " << a << ", v2: " << b << std::endl;
    std::cout << "max= " << ::max(a, b) << std::endl;
    std::cout << "v1: " << c << ", v2: " << d << std::endl;
    std::cout << "max= " << ::max(c, d) << std::endl;
    std::cout << "v1: " << e << ", v2: " << f << std::endl;
    std::cout << "max= " << ::max(e, f) << std::endl;
    std::cout << "v1: " << i << ", v2: " << j << std::endl;
    std::cout << "max= " <<::max(i, j) << std::endl;
    std::cout << "v1: " << s1 << ", v2: " << s2 << std::endl;
    std::cout << "max= " << ::max(s1, s2) << std::endl;
    std::cout << "std max= " << std::max(s1, s2) << std::endl;
	std::cout << std::setfill ('-') << std::setw (30);
    std::cout << "" << std::endl;

    return 0;
}

/*
int main( void ) {
   
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return 0;
}*/