/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 11:33:16 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 22:45:18 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int nb = 0;

    std::cout << std::endl;
    std::cout << "Select a number of zombie (1 -> 9) ..." << std::endl;
    while (nb <= 0 || nb > 9)
    {
        std::cin >> nb;
        if (nb <= 0 || nb > 9)
            std::cout << "Bad input ..." << std::endl;
    }
    std::cout << std::endl;

    Zombie *Horde = zombieHorde(nb, "Member_");
    for (int i = 0; i < nb; i++)
        Horde[i].announce();
    delete [] Horde;
    return 0;
}