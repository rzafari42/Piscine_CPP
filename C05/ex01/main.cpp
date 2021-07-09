/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 15:51:51 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat b0("Correct", 9);
    Bureaucrat b1("GoodOne", 4);
    Bureaucrat b2("LowGrade", 140);

    try
    {
        Form f0("f_00", 0, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Form f1("f_01", 5, 251);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Form f2("f_02", 0, 251);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Form f3("f_03", 8, 10);
    Form f4("f_04", 10, 10);


    std::cout << std::endl;
    std::cout << f4;
    b0.signForm(f4);
    b1.signForm(f4);
    b2.signForm(f4);

    return 0;
}