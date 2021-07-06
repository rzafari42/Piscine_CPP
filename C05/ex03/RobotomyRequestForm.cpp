/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:18 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 08:22:18 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src)
{
    *this = src;
    return;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    Form::operator=(rhs);
    return *this;
}

void    RobotomyRequestForm::formAction(std::string const& target) const
{
    std::srand(std::time(nullptr));
    std::cout << "Hey im drilling !" << std::endl;
    const int id = std::rand() % 2;
    if (id == 0)
        std::cout << target << " has been robotmotized" << std::endl;
    if (id == 1)
        std::cout << "Robotmotizing for " << target << " Failed" << std::endl;
}