/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:54 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/12 22:27:34 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <cstdbool>
# include "Form.hpp"

class Form;

class Bureaucrat
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
        class GradeInvalidException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                        return ("Problem with the grade value: negative value :(");        
                }
        };

    private:
        std::string const   _name;
        int        _grade;

    public:
        Bureaucrat();
        Bureaucrat( std::string name, int grade );
        Bureaucrat(Bureaucrat const& src);
        ~Bureaucrat();
        Bureaucrat & operator=( Bureaucrat const& rhs );

        std::string getName() const;
        int getGrade() const;

        void    increment();
        void    decrement();
        void    signForm(Form &f) const;
        void    executeForm(Form const & form);
};

std::ostream & operator<<( std::ostream & flux, Bureaucrat const& rhs );

#endif
