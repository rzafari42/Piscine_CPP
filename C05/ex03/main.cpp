/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 00:03:29 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern someRandomIntern;
	Form*		rrf = NULL;
	Form*		fail = NULL;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	Bureaucrat b0("b0", 42);

	if (rrf != NULL)
	{	
		std::cout << *rrf << std::endl;
		b0.signForm(*rrf);
		b0.executeForm(*rrf);
		delete rrf;
	}

	fail = someRandomIntern.makeForm("qzdsqdsd", "intern");

	return (0);
}