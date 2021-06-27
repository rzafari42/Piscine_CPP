/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 14:57:17 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 18:34:42 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define SIZE 8
# include <iostream>
# include <string>
# include <iomanip>
# include <limits.h>

class   Phonebook {
    public:
        Phonebook(void);
        ~Phonebook(void);
        int getinfo(int i, int j);
        void setinfo(int i);
    
    private:
        int availability;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif