/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 10:59:30 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/12 19:49:31 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIN_HPP
# define EASYFIN_HPP
# include <algorithm>

template<typename T>
bool easyfind(T const& val1, int const val2)
{
    typename T::const_iterator it;

    it = find(val1.begin(), val1.end(), val2);
    if (it == val1.end())
        return false;
    return true;
}

#endif