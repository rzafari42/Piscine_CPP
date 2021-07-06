/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:05 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 16:44:48 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

class Intern
{
    public:
        class FormCreationFailed : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Failure: Form Name not recognized");
                }
        };
    public:
        Intern();
        Intern(Intern const& src);
        ~Intern();
        Intern & operator=(Intern const& rhs);
        static Form *makeForm(std::string const form, std::string const target);

    private:
        static Form *PresidentialPardon(std::string const target);
        static Form *RobotomyRequest(std::string const target);
        static Form *ShrubberyCreation(std::string const target);
};

#endif