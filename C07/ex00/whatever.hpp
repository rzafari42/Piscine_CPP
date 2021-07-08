/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:57:25 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/08 11:39:29 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>
# include <iomanip>

template<typename T>
void swap(T &v1, T &v2)
{
    T v3;

    v3 = v1;
    v1 = v2;
    v2 = v3;
}

template<typename T> 
T const& min(T const& v1, T const& v2)
{
    return ((v1 < v2) ? v1 : v2);
}

template<typename T> 
T const& max(T const& v1, T const& v2)
{
    return ((v1 > v2) ? v1 : v2);
}

#endif