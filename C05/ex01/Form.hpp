/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:17:34 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 15:42:00 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <cstdbool>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    class GradeTooHighException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    protected:
        Form();

    private:
        std::string const   _formname;
        bool                _signed;
        int         const   _gradetosign;
        int         const   _gradetoexecute;
    
    public:
        Form(std::string name, int const gradetosign, int const gradetoexecute);
        Form(Form const& src);
        ~Form();
        Form & operator=(Form const& rhs);

        std::string getFormName() const;
        bool getIfSigned() const;
        int getGradetosign() const;
        int getGradetoexecute() const;

        void    beSigned(Bureaucrat const& b);
};

std::ostream & operator<<( std::ostream & flux, Form const& rhs );

#endif
