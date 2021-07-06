/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:58 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 16:45:28 by rzafari          ###   ########.fr       */
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
	Bureaucrat	supreme("Supreme Bob", 1);
	Bureaucrat	officer("Officer Bob", 140);
	Bureaucrat	justBob("Bob the peasant", 150);
	ShrubberyCreationForm	F182("target_tree");
	RobotomyRequestForm		C182("target_robot");
	PresidentialPardonForm	B182("target_pardon");

	std::cout << "\t\t###############################################" << std::endl;
	std::cout << supreme << officer << justBob;
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << F182;
	justBob.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	std::cout << F182;
	officer.signForm(F182);
	std::cout << F182;
	officer.executeForm(F182);
	supreme.executeForm(F182);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 60));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << C182;
	justBob.signForm(C182);
	std::cout << C182;
	officer.executeForm(C182);
	std::cout << C182;
	officer.signForm(C182);
	std::cout << C182;
	officer.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	supreme.executeForm(C182);
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << (officer = Bureaucrat("", 10));
	std::cout << "\t\t###############################################" << std::endl;
	std::cout << B182;
	justBob.signForm(B182);
	std::cout << B182;
	officer.executeForm(B182);
	std::cout << B182;
	officer.signForm(B182);
	std::cout << B182;
	officer.executeForm(B182);
	supreme.executeForm(B182);
	std::cout << "\t\t###############################################" << std::endl;

	Intern  someRandomIntern;
	Form*   rrf;

	std::cout << officer;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	officer.executeForm(*rrf);
	officer.signForm(*rrf);
	officer.executeForm(*rrf);
	std::cout << "\t\t###############################################" << std::endl;
	rrf = someRandomIntern.makeForm("shrubbery creation", "John");
	std::cout << *rrf;
	officer.executeForm(*rrf);
	officer.signForm(*rrf);
	officer.executeForm(*rrf);
	std::cout << "\t\t###############################################" << std::endl;
	rrf = someRandomIntern.makeForm("presidential pardon", "Bobby");
	std::cout << *rrf;
	officer.executeForm(*rrf);
	officer.signForm(*rrf);
	officer.executeForm(*rrf);
	std::cout << "\t\t###############################################" << std::endl;
	rrf = someRandomIntern.makeForm("presidential pard", "Bobby");

	return (0);
}