/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:59:27 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/12 19:49:29 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <string>
#include <set>
#include <list>
#include <vector>

template<typename T>
void findelement(T const& elem)
{
    int tofind[] = {70, 15, 20, 30, 32, 42, 5, 40, 55, 47};

    for (unsigned int i = 0; i < sizeof(tofind) / sizeof(*tofind); i++)
        std::cout << tofind[i] << ": " << easyfind(elem,  tofind[i]) << std::endl;
}


int main(void)
{
    std::set<int> array0;
    std::list<int> array1;
    std::vector<int> array2;

    for (int i = 0; i < 5; i++)
    {
        array0.insert(10 * i);
        array1.push_back(10 * i + 5);
        array2.push_back(10 * i + 7);
    }

    std::cout << "set:" << std::endl;
    findelement(array0);
    std::cout << std::endl;

    std::cout << "list:" << std::endl;
    findelement(array1);
    std::cout << std::endl;
    
    std::cout << "vector:" << std::endl;
    findelement(array2);
    return 0;
}