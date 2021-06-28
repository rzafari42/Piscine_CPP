/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 23:07:09 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 23:07:17 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen karen;

    if (ac != 2)
    {
        std::cout << "Bad parameters." << std::endl;
        return -1;
    }
    else
        karen.complain(av[1]);
    return 0;
}