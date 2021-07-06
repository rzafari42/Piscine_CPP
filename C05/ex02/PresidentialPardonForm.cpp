#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src)
{
    *this = src;
    return;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
    Form::operator=(rhs);
    return *this;
}

void PresidentialPardonForm::formAction(std::string const& target) const
{
    std::cout << target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}
