/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:49 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 15:46:43 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name( name ), _grade(grade) 
{
    if (this->_grade < 0)
        throw Bureaucrat::GradeInvalidException();
    else if (this->_grade == 0)
        throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
    *this = src;
    return ;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const& rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

std::string Bureaucrat::getName( void ) const
{
    return this->_name;
}

int Bureaucrat::getGrade( void ) const
{
    return this->_grade;
}

const char* Bureaucrat::GradeInvalidException::what() const throw()
{
    return ("Bad grade value: negative value :(");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bad grade value: too low");            
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bad grade value: too high");
}

void Bureaucrat::increment( void )
{
    if ( this->_grade == 1 )
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrement( void )
{
    if ( this->_grade == 150 )
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream & operator<<( std::ostream & flux, Bureaucrat const& rhs )
{
    flux << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return flux;
}