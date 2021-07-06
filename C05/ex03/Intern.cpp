/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:03 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 16:45:49 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const& src)
{
    *this = src;
    return;
}

Intern::~Intern(){};

Intern & Intern::operator=(Intern const& rhs)
{
    if (this == &rhs)
        return *this;
    return *this;
}

Form* Intern::PresidentialPardon(std::string const target)
{
    return(new PresidentialPardonForm(target));
}

Form* Intern::RobotomyRequest(std::string const target)
{
    return(new RobotomyRequestForm(target));
}

Form *Intern::ShrubberyCreation(std::string const target)
{
    return(new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string const form, std::string const target)
{
    std::string formName[] = {"presidential pardon", "robotomy request", "shrubbery creation" };
    Form *(*pt[])(std::string const target) = {&Intern::PresidentialPardon, &Intern::RobotomyRequest, &Intern::ShrubberyCreation};
    
    int i = 0;
    try
    {
       while ( i != sizeof(formName)/sizeof(*formName) )
       {
            if (formName[i].compare(form) == 0)
            {
                std::cout << "Intern creates " << form << std::endl;
                return pt[i](target);
            }
            i++;
       }
       if (i == sizeof(formName)/sizeof(*formName))
            throw Intern::FormCreationFailed();
    }
    catch(const Intern::FormCreationFailed::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return NULL;
}