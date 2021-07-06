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