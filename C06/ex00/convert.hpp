/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:21:10 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/07 12:11:04 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <climits>
# include <limits>
# include <iomanip>
# include <stdlib.h>

int     precision(char *input);
void        convert_char(double arg, char *input);
void        convert_int(double arg);
void        convert_float(double arg, int prec);
void        convert_double(double arg, int prec);
void        convert(char *input);

#endif