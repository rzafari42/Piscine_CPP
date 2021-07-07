/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:12:21 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 12:09:25 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int precision(char *input)
{
    int i = 0;
    int j = 0;
    
    while (input[i] && input[i] != '.')
        i++;
    if (input[i] && input[i] == '.' && std::isdigit(input[i + 1]))
    {
        i++;
        while (input[i] && std::isdigit(input[i]))
        {
            i++;
            j++;
        }
        return j;
    }
    else
        return 1;
}

void convert_char(double arg, char *input)
{
    int v = static_cast<int>(arg);
    char c = '\0';

    if (!isdigit(input[0]) && !input[1])
        c = input[0];
    else
        c = static_cast<char>(arg);

    std::cout << "char: ";
    if (v <= INT_MIN || v >= INT_MAX)
    {
        std::cout << "imppssible" << std::endl;
        return;
    }
    else if (!std::isprint(c))
        std::cout << "Non displayable" << std::endl;
    else 
        std::cout << "'" << c << "'"<< std::endl;
}

void convert_int(double arg)
{
    long int c = static_cast<long>(arg);
    std::cout << "int: ";
    if (c < INT_MIN || c > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << c << std::endl;
}

void convert_float(double arg, int prec)
{
    float c = static_cast<float>(arg);

    std::cout << "float: " << std::fixed << std::setprecision(prec) << c << 'f' << std::endl;
}

void convert_double(double arg, int prec)
{
    std::cout << "double: " << std::fixed << std::setprecision(prec) << arg << std::endl;
}

void convert(char *input)
{
    double arg = std::atof(input);
    int prec = precision(input); 

    convert_char(arg, input);
    convert_int(arg);
    convert_float(arg, prec);
    convert_double(arg, prec);
}