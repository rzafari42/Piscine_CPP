/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:54 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 15:10:33 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat
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
    class GradeInvalidException: public std::exception
    {
        public:
            virtual const char* what() const throw();
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
};

std::ostream & operator<<( std::ostream & flux, Bureaucrat const& rhs );

#endif
