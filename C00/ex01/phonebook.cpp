/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:54:39 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 18:10:09 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->availability = 1;
    this->last_name = "";
    this->first_name = "";
    this->nickname = "";
    this->darkest_secret = "";
    this->phone_number = "";
}

Phonebook::~Phonebook(void)
{
    return;
}

int Phonebook::getinfo(int i, int j)
{
    if (i == 1)
    {
        if (this->availability == 0)
            return -1;
        return 0;
    }
    if (i == 2)
    {
        std::cout << "Firstname: " << this->first_name << std::endl;
        std::cout << "Lastname: " << this->last_name << std::endl;
        std::cout << "Nickname: " << this->nickname << std::endl;
        std::cout << "Phone Number: " << this->phone_number << std::endl;
        std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
        return 0;
    }
    if (i == 4)
    {
        std::string firstname_tmp = this->first_name;
        std::string lastname_tmp = this->last_name;
        std::string nickname_tmp = this->nickname;

        if (this->first_name.size() > 10)
            firstname_tmp.replace(firstname_tmp.begin() + 9, firstname_tmp.end(), ".");
        if (this->last_name.size() > 10)
            lastname_tmp.replace(lastname_tmp.begin() + 9, lastname_tmp.end(), ".");
        if (this->nickname.size() > 10)
            nickname_tmp.replace(nickname_tmp.begin() + 9, nickname_tmp.end(), ".");

        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << j << '|';
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << firstname_tmp << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << lastname_tmp << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << nickname_tmp << "|" << std::endl;
        return 0;
    }
    return 0;
}

void Phonebook::setinfo(int i)
{
    if (i == 1)
    {
        std::cout << "First name: ";
        std::cin >> this->first_name;

        std::cout << "Last name: ";
        std::cin >> this->last_name;
        
        std::cout << "Nickname: ";
        std::cin >> this->nickname;

        std::cout << "phone number: ";
        std::cin >> this->phone_number;

        std::cout << "Darkest Secret: ";
        std::cin >> this->darkest_secret;

        this->availability = 0;
    }
    if (i == 0)
    {
        this->availability = 1;
        this->first_name = "";
        this->last_name = "";
        this->nickname = "";
        this->phone_number = "";
        this->darkest_secret = "";
    }
}
