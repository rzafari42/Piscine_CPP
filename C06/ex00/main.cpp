/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:52:23 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 09:59:04 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int ac, char **av)
{
    if ( ac != 2 )
    {
        std::cout << "1 (and only 1) argument is required " << std::endl;
        return -1;
    }
    convert(av[1]);
    return 0;
}
