/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:36:14 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 11:03:02 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    Base *base = generate();
    std::cout << "Identify from Pointer:" <<  std::endl;
    identify_from_pointer(base);
    std::cout << std::endl;
    std::cout << "Identify from Referecne:" <<  std::endl;
    identify_from_reference(*base);

    delete base;
    return 0;
}
