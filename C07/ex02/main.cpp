/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 16:45:41 by rzafari           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/07/12 14:36:30 by rzafari          ###   ########.fr       */
=======
/*   Updated: 2021/07/09 15:52:48 by rzafari          ###   ########.fr       */
>>>>>>> 78833816a5a21072905ff6c969d5838d9fe6f293
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
void fill_tab(Array<T> &tab)
{
    for (int i = 0; i < tab.size(); i++)
        tab[i] = i * 2;
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
    std::cout << tab[10000] << std::endl;
}

int main(void)
{
    Array<int> tab_(6);
    Array<char> nothinginside;
    Array<int> assign;

   /* Array<int> v(6);
    v = tab_;
    
    std::cout << tab_[0] << std::endl;
    
    std::cout << v[0] << std::endl;*/
    
    std::cout << "Filling the 'tab_' array ..." << std::endl;
    fill_tab(tab_);
    std::cout << "Size of the 'tab_' array: ";
    print_size(tab_);
    std::cout << std::endl;
    std::cout << "tab_ : ";
    print_content(tab_);

    std::cout << std::endl;
    std::cout << "Size of the 'nothinginside' array: ";
    print_size(nothinginside);
    std::cout << "nothinginside : ";
    print_content(nothinginside);

    std::cout << std::endl;
    std::cout << ">> Let's try to access a non allocated memory" << std::endl;
    try
    {
        unprintable_test(tab_);
    }
    catch(std::exception &e)
    {
        std::cout << "Error: Cannot access to a non allocated space in memory !" << std::endl;
    }
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << ">> Let's assign '_tab' to the 'assign' array" << std::endl;
    std::cout << ">> 'cpy' array: ";
    assign = tab_;
    print_content(assign);
    std::cout << ">> Let's change a value in the 'assign' array" << std::endl;
    assign[0] = 42;
    std::cout << ">> New 'assign' array: ";
    print_content(assign);
    std::cout << ">> First '_tab' array: ";
    print_content(tab_);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << ">> Let's cpy '_tab' to the 'cpy' array" << std::endl;
    Array<int> cpy(tab_);
    std::cout << ">> 'cpy' array: ";
    print_content(cpy);
    std::cout << ">> Let's change a value in the 'cpy' array" << std::endl;
    cpy[3] = 10;
    std::cout << ">> New 'cpy array: ";
    print_content(cpy);
    std::cout << ">> First '_tab' array: ";
    print_content(tab_);

    return 0;
}

/*
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/