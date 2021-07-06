/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:17:31 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/06 15:58:19 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signed(false), _gradetosign(0), _gradetoexecute(0), _target("")
{
}

Form::Form(std::string name, int const gradetosign, int const gradetoexecute, std::string target) : _formname(name), _signed(false), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute), _target(target)
{
    try
    {
        if ( this->_gradetosign == 0 || this->_gradetoexecute == 0 )
            throw Form::GradeTooHighException();
        else if ( this->_gradetosign > 150 || this->_gradetoexecute > 150 )
            throw Form::GradeTooLowException();
    }
    catch(const Form::GradeTooHighException::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Form::GradeTooLowException::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Form::Form(Form const& src) : _gradetosign(src._gradetosign), _gradetoexecute(src._gradetoexecute), _target(src._target)
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

std::string Form::getTarget() const
{
    return this->_target;
}

void Form::beSigned(Bureaucrat const& b)
{

    if (b.getGrade() > this->getGradetosign())
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
    }
}

void Form::execute(Bureaucrat const& executor) const
{
    if (this->getIfSigned() == false)
    {
        throw Form::Notsigned();
    }
    else if (executor.getGrade() > this->getGradetoexecute())
        throw Bureaucrat::GradeTooLowException();
    else
        this->formAction(this->getTarget());
}

std::ostream & operator<<( std::ostream & flux, Form const& rhs )
{
    flux << "\n" << rhs.getFormName() << ": \nSigned status: " << rhs.getIfSigned() << "\nGrade to sign: " << rhs.getGradetosign() << "\nGrade to execute: " << rhs.getGradetoexecute() << "\nTarget: " << rhs.getTarget() << std::endl;
    return flux;
}
