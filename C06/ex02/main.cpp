/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:36:14 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 10:45:03 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *base = generate();
    std::cout << "Identify from Pointer:" <<  std::endl;
    identify(base);
    std::cout << std::endl;
    std::cout << "Identify from Referecne:" <<  std::endl;
    identify(*base);

    delete base;
    return 0;
}
