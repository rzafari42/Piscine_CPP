/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 16:09:07 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
/*
int main( void )
{
    Bureaucrat b0("Correct", 9);
    Bureaucrat b1("GoodOne", 4);
    Bureaucrat b2("BadOne", 150);

    ShrubberyCreationForm s0("s_00");
    RobotomyRequestForm r0("r_00");
    PresidentialPardonForm p0("p_00");

    s0.beSigned(b0);
    s0.execute(b0);

    s0.beSigned(b1);
    s0.execute(b1);

std::cout << std::endl;
std::cout << std::endl;

    r0.beSigned(b0);
    r0.execute(b0);

std::cout << std::endl;
std::cout << std::endl;

    r0.beSigned(b1);
    r0.execute(b1);

std::cout << std::endl;
std::cout << std::endl;

    p0.beSigned(b0);
    p0.execute(b0);

std::cout << std::endl;
std::cout << std::endl;

    p0.beSigned(b1);
    p0.execute(b1);

std::cout << std::endl;
std::cout << std::endl;

   b2.executeForm(p0);

    return 0;
}*/

int main(void)
{
	Bureaucrat b0("bobby", 45);
	Bureaucrat b1("Josh", 120);
	Bureaucrat b2("James", 10);

	PresidentialPardonForm PP("Elena");
	ShrubberyCreationForm SC("Emma");
	RobotomyRequestForm RR("Laura");

	std::cout << b0 << b1 << b2;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::setfill ('*') << std::setw (30);
	std::cout << std::endl;

	std::cout << PP;
	std::cout << std::setfill ('*') << std::setw (30);

	std::cout << std::endl;
	std::cout << SC;
	std::cout << std::setfill ('*') << std::setw (30);

	std::cout << std::endl;
	std::cout << RR;
	std::cout << std::setfill ('*') << std::setw (30);
	std::cout << std::endl;
	std::cout << std::setfill ('*') << std::setw (30);
	std::cout << std::endl;

	b0.executeForm(PP);
	b0.executeForm(SC);
	b0.executeForm(RR);

	try
	{
		PP.execute(b0);
	}
	catch(const Form::Notsigned::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
	{
		SC.execute(b0);
	}
	catch(const Form::Notsigned::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
	{
		RR.execute(b0);
	}
	catch(const Form::Notsigned::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	return (0);
}