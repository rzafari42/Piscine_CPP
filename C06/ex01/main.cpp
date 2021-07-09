/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:26:18 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 10:30:33 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

int main(void)
{
    uintptr_t raw;
    Data init;
    Data *res;

    init.str = "Hi";
    raw = serialize(&init);
    res = deserialize(raw);
    printres(res, &init);

    return 0;
}