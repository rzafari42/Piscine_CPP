/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:03:19 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 13:53:32 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int tab0[] = {42, 90, 123, 27, 8, 1080};
    double tab1[] = {42.1502, 90.23, 123.867, 27.124, 8.13, 1080.42};
    char tab2[] = {'a', 'b', 'c', 'd', 'e'};
    std::string tab3[] = {"Hello", "Bonjour", "Hola", "Buongiorno", "Hej"};

    iter(tab0, sizeof(tab0)/sizeof(*tab0), &printtab);
    std::cout << std::endl;
    
    iter(tab1, sizeof(tab1)/sizeof(*tab1), &printtab);
    std::cout << std::endl;
    
    iter(tab2, sizeof(tab2)/sizeof(*tab2), &printtab);
    std::cout << std::endl;
    
    iter(tab3, sizeof(tab3)/sizeof(*tab3), &printtab);

    return 0;
}