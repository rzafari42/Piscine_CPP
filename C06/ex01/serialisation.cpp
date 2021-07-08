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

void *concatenate(char *tab1, char *tab2, char *tab3)
{   
    char *serialize = new char[sizeof(char) * (16) + sizeof(tab3)];
    int j = 0;
    
    for (int i = 0; i < 8; i++)
        serialize[j++] = tab1[i];
    for (int i = 0; i < static_cast<int>(sizeof(int)); i++)
        serialize[j++] = tab3[i];
    for (int i = 0; i < 8; i++)
        serialize[j++] = tab2[i];
    serialize[j] = '\0';
    
    return serialize;
}

void fill_chartab(char *tab1, char *tab2)
{
    char const tab[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

    int num;
    for (int i = 0; i < 8; i++)
    {
        num = rand() % (sizeof(tab) - 1);
        tab1[i] = tab[num];
    }
    tab1[8] = '\0';
    for (int i = 0; i < 8; i++)
    {
        num = rand() % (sizeof(tab) - 1);
        tab2[i] = tab[num];
    }
    tab2[8] = '\0';
}

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