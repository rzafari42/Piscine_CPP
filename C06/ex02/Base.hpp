/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:28:36 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 14:41:28 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <string>


class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif