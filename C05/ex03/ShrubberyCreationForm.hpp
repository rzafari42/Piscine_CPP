/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:26 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 08:22:28 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <stdio.h>
# include <fstream>
# include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form
{
    protected:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string const target);
        ShrubberyCreationForm(ShrubberyCreationForm const& src);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const& rhs);

        virtual void formAction(std::string const& target) const;
};

#endif