/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:37:49 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 16:17:17 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name( name ), _grade(grade) 
{
    try
    {
        if (this->_grade < 0)
            throw Bureaucrat::GradeInvalidException();
        else if (this->_grade == 0)
            throw Bureaucrat::GradeTooHighException();
        else if (this->_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooHighException::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeTooLowException::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const Bureaucrat::GradeInvalidException::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
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

void Bureaucrat::increment( void )
{
    try
    {
        if ( this->_grade == 1 )
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const Bureaucrat::GradeTooHighException::exception &e)
    {
        std::cerr << this->getName() << ": " << e.what() << " (" << this->getGrade() << ")" << std::endl;
    }
    this->_grade--;
}

void Bureaucrat::decrement( void )
{
    try
    {
        if ( this->_grade == 150 )
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const Bureaucrat::GradeTooLowException::exception &e)
    {
        std::cerr << this->getName() << ": " << e.what() << " (" << this->getGrade() << ")" << std::endl;
    }
    this->_grade++;
}

void Bureaucrat::signForm(Form &f) const
{
    try
    {
        f.beSigned(*this);
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " cant sign " << f.getFormName() << " because it doesn't have the good grade" << std::endl;
        return;
    }
    std::cout << this->_name << " signs " << f.getFormName() << std::endl;
}

void Bureaucrat::executeForm(Form const& form)
{
    try
    {
        form.execute(*this);
    }
    catch(std::exception &e)
    {
        std::cerr << this->_name  << " cannot executs " << form.getFormName() << ". " << e.what() << std::endl;
        return;
    }
    std::cout << this->_name << " executs "  << form.getFormName() << std::endl;
}

std::ostream & operator<<( std::ostream & flux, Bureaucrat const& rhs )
{
    flux << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return flux;
}