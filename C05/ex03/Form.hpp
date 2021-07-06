/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:17:34 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/13 19:59:18 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <cstdbool>
# include <ctime>
# include <random>
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
    public:
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                        return ("Problem with the grade value: too high");
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                        return ("Problem with the grade value: too low");
                }
        };
        class Notsigned: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                        return  ("Form is not singed");
                }
        };
    private:
        std::string const   _formname;
        bool                _signed;
        int         const   _gradetosign;
        int         const   _gradetoexecute;
        std::string const   _target;

    public:
        Form();
        Form(std::string name, int const gradetosign, int const gradetoexecute, std::string target);
        Form(Form const& src);
        virtual ~Form();
        Form & operator=(Form const& rhs);

        std::string getFormName() const;
        bool getIfSigned() const;
        int getGradetosign() const;
        int getGradetoexecute() const;
        std::string getTarget() const;

        void beSigned(Bureaucrat const& b);

        virtual void formAction(std::string const& target) const = 0;

        void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<( std::ostream & flux, Form const& rhs );

#endif
