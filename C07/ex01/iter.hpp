/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 14:03:22 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 11:39:38 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<typename T>
void printtab(T const i)
{
    std::cout << i << std::endl;
}

template<typename T>
void iter(T *addr, unsigned int const len, void (*func)(T &))
{
    for (unsigned int i = 0; i < len; i++)
        func(addr[i]);
}

#endif