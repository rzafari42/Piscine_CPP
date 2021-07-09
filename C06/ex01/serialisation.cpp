/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:00:07 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/09 10:32:15 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

uintptr_t serialize(Data * ptr)
{    
    uintptr_t tab_seri;
    
    tab_seri = reinterpret_cast<uintptr_t>(ptr);
 
    return tab_seri;
}

Data * deserialize(uintptr_t raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);

    return data;
}

void printres(Data *res, Data *init)
{
    std::cout << "Init: " << init << std::endl;
    std::cout << "Res:  " << res << std::endl;

    std::cout << "Init: " << init->str << std::endl;
    std::cout << "Res:  " << res->str << std::endl;
}
