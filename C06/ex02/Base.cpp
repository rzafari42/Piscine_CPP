/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:31:56 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 15:25:46 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base * generate(void)
{
    std::srand(time(nullptr));
    int id = rand() % 3;

    if (id == 1)
        return new A;
    else if (id == 2)
        return new B;
    else if (id == 3)
        return new C;
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
if (dynamic_cast<A>(p))
    std::cout << "A" << std::endl;
if (dynamic_cast<B*>(&p))s
    std::cout << "B" << std::endl;
if (dynamic_cast<C*>(&p))
    std::cout << "C" << std::endl;
}
