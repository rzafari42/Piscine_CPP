/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 16:10:23 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat b0("Correct", 9);
    Bureaucrat b1("GoodOne", 4);
    Form f0("f_00", 0, 5);
    Form f1("f_01", 5, 251);
    Form f2("f_02", 0, 251);
    Form f3("f_03", 8, 10);
    Form f4("f_04", 10, 10);
   
    std::cout << std::endl;
    std::cout << f3;
    f3.beSigned(b0);
    f3.beSigned(b1);

    std::cout << std::endl;
    std::cout << f4;
    f4.beSigned(b0);
    f4.beSigned(b1);
    return 0;
}