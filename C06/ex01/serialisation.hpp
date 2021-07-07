/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:00:10 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 14:06:44 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP
# include <iostream>
# include <string>
# include <stdlib.h> 
# include <stdio.h>
# include <time.h>
# include <limits>

struct Data { 
    std::string str;
};

void *concatenate(char *tab1, char *tab2, char *tab3);
void fill_chartab(char *tab1, char *tab2);
uintptr_t serialize(Data * ptr);
Data * deserialize(uintptr_t raw);
void printres(Data *res);


#endif