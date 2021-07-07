/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:36:14 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 15:21:18 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    A *a = new A();
    B *b = new B();
    C *c = new C();

    std::cout << "Identify from Pointer:" <<  std::endl;
    identify(a);
    identify(b);
    identify(c);
    std::cout << std::endl;
    std::cout << "Identify from Referecne:" <<  std::endl;
    identify(*a);
    identify(*b);
    identify(*c);

    return 0;
}
