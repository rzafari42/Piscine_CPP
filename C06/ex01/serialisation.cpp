/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:00:07 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 14:34:47 by rzafari          ###   ########.fr       */
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
    Data *data = new Data;

    data = reinterpret_cast<Data *>(raw);

    return data;
}

void printres(Data *res, Data *init)
{
    std::cout << "Init: " << init << std::endl;
    std::cout << "Res:  " << res << std::endl;
}
