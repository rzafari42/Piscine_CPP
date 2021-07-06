/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 08:22:14 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/14 10:35:40 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
    protected:
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string const target);
        PresidentialPardonForm(PresidentialPardonForm const& src);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm & operator=(PresidentialPardonForm const& rhs);

        virtual void formAction(std::string const& target) const;
};

#endif