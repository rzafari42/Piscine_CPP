/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:40:25 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 21:34:04 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int nb = 0;
    int i = 0;

    Zombie teacher("Charles");
    teacher.announce();

    randomChump("Zombie_rand0");
    std::cout << std::endl;
    std::cout << "Select a number of zombie (1 -> 9) ..." << std::endl;
    while (nb <= 0 || nb > 9)
    {
        std::cin >> nb;
        if (nb <= 0 || nb > 9)
            std::cout << "Bad input ..." << std::endl;
    }
    std::cout << std::endl;

    Zombie *trainee[nb];

    while ( i < nb )
    {
        trainee[i] = newZombie("zombie");
        trainee[i]->announce();
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while ( i < nb )
    {
        delete trainee[i];
        i++;
    }

    return 0;
}

