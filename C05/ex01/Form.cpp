/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:17:31 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 16:17:07 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signed(false), _gradetosign(0), _gradetoexecute(0)
{
}

Form::Form(std::string name, int const gradetosign, int const gradetoexecute) : _formname(name), _signed(false), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute)
{
    if ( this->_gradetosign == 0 || this->_gradetoexecute == 0 )
        throw Form::GradeTooHighException();
    else if ( this->_gradetosign > 150 || this->_gradetoexecute > 150 )
        throw Form::GradeTooLowException();
}

Form::Form(Form const& src) : _gradetosign(src._gradetosign), _gradetoexecute(src._gradetoexecute)
{
    *this = src;
    return;
}

Form::~Form(){}

Form & Form::operator=(Form const& rhs)
{
    if (this != &rhs)
        this->_signed = rhs._signed;
    return *this;
}

std::string Form::getFormName() const
{
    return this->_formname;
}

bool Form::getIfSigned() const
{
    return this->_signed;
}

int Form::getGradetosign() const
{
    return this->_gradetosign;
}

int Form::getGradetoexecute() const
{
    return this->_gradetoexecute;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Problem with the grade value: too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Problem with the grade value: too low");
}

void Form::beSigned(Bureaucrat const& b) 
{
    if (b.getGrade() > this->getGradetosign())
        throw Form::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream & operator<<( std::ostream & flux, Form const& rhs )
{
    flux << rhs.getFormName() << ": \nSigned status: " << rhs.getIfSigned() << "\nGrade to sign: " << rhs.getGradetosign() << "\nGrade to execute: " << rhs.getGradetoexecute() << std::endl;
    return flux;
}
