/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:21:30 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 18:34:36 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "main.hpp"

Phonebook   contact[8];

int add_contact()
{
    int count = 0;

    std::string entry = "";

    std::cout << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (contact[i].getinfo(1, 0) == -1)
            count++;
        else
        {
            contact[i].setinfo(1);
            return 0;
        }
    }
    if (count == SIZE)
    {
        std::cout << "No more space available !" << std::endl;
        std::cout << "Would you like to delete a contact so you can add a new one ? (yes/no)" << std::endl;
        std::cin >> entry;
        std::cout << std::endl;
        while ((entry.compare("yes") != 0) && (entry.compare("no") != 0))
        {
            std::cout << "Bad entry. Only 'yes' or 'no' are accepted" << std::endl;
            std::cin >> entry;
            std::cout << std::endl;
        }
        if (!entry.compare("yes"))
        {
            contact[7].setinfo(0);
            std::cout << "Last contact deleted" << std::endl;
            std::cout << "You can add a new one" << std::endl;
            add_contact();
        }
    }
    return 0;
}

int     printarray(void)
{
    int i = 0;
    int count = 0;
    
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "id" << '|';
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "FirstName" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "LastName" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout << "Nickname" << "|";
    std::cout << std::setfill(' ') << std::setw(10);
    std::cout <<  std::endl;
    while (i < SIZE)
    {
        if (contact[i].getinfo(1, 0) == -1)
            contact[i].getinfo(4, i);
        else
            count++;
        i++;
    }
    if (count == SIZE)
        return -1;
    return 0;
}

int search_contact(int j)
{
    int id = -1;
    bool checkinput;
    (void)j;

   if (printarray() == -1)
    {
        std::cout << "No contact !" << std::endl;
        return 0;
    }
    std::cout << std::endl;
    std::cout << "Who are you looking for ? (id betwenn 0 and 7)" << std::endl;
    while (id < 0 || id >= SIZE || checkinput)
	{
        std::cin >> id;
		if ((checkinput = std::cin.fail()))
        {
			if (!std::cin.eof())
            {
				std::cout << "Not an integer ! Please, try again (0 to 7 only)\n";
                std::cin.clear();
                std::cin.ignore(INT_MAX, '\n');
            }
        }
        if (id < 0 || id >= SIZE)
            std::cout << "Bad entry ! Must be between 0 and 7, try again:" << std::endl;
    }
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

    if (contact[id].getinfo(1, 0) == -1)
    {
        contact[id].getinfo(2, 0);
        return 1;
    }
    else
        std::cout << "Contact does not exist" << std::endl;
    return 0;
}

int catch_input(std::string buff)
{    
    if (buff.compare("ADD") == 0)
        add_contact();
    else if (buff.compare("SEARCH") == 0)
        search_contact(0);
    else if (buff.compare("EXIT") == 0)
        return 0;
    else
        std::cout << "Sorry, bad input" << std::endl;
    std::cout << std::endl;
    return 1;
}

int main(void)
{
    std::string buff;

    while (buff.compare("EXIT") != 0)
    {
        std::cout << std::setfill ('X') << std::setw (30);
        std::cout << "  " << std::endl;
        std::cout << " . What do you wanna do ? " << std::endl;
        std::cin >> buff;
        if (!catch_input(buff))
            return 0;
    }
    return 0;
}