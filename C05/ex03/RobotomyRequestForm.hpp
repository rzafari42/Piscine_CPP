/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:20 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 08:22:21 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    protected:
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string const target);
        RobotomyRequestForm(RobotomyRequestForm const& src);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const& rhs);

        virtual void formAction(std::string const& target) const;
};

#endif