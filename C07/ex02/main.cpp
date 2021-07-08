/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:45:41 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 11:42:02 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
void fill_tab(Array<T> &tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        tab[i] = i * 2;
    }
}

template<typename T>
void print_size(Array<T> &tab)
{
    std::cout << tab.size() << std::endl;
}

template<typename T>
void print_content(Array<T> &tab)
{
    if (tab.size() == 0)
    { 
        std::cout << "Empty" << std::endl;
        return;
    }
    for (int i = 0; i < tab.size(); i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
}

template<typename T>
void unprintable_test(Array<T> &tab)
{
    try
    {
        std::cout << tab[10000] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: Cannot access to a non allocated space in memory !" << std::endl;
    }
}

int main(void)
{
    Array<int> tab_(5);
    Array<char> nothinginside;
    Array<int> cpy = tab_;

    std::cout << "Filling the 'tab_' array ..." << std::endl;
    fill_tab(tab_);
    std::cout << "Size of the 'tab_' array: ";
    print_size(tab_);
    std::cout << std::endl;
    std::cout << "tab_ : ";
    print_content(tab_);
    std::cout << "nothinginside : ";
    print_content(nothinginside);


    std::cout << std::endl;
    std::cout << ">> Let's try to access a non allocated memory" << std::endl;
    unprintable_test(tab_);
   
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << ">> Let's copy the '_tab' array" << std::endl;
    std::cout << ">> 'cpy' array: ";
    cpy = tab_;
    print_content(cpy);

    return 0;
}
