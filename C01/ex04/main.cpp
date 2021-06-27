/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:50:10 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/27 23:01:42 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int check_input(char **argv)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < (int)std::strlen(argv[i]); j++)
        {
            if (std::isdigit(argv[i][j]))
                return 0;
        }
    }
    return 1;
}

std::string create_filename(char *name)
{
    std::string filename = "";

    for (int i = 0; i < (int)std::strlen(name); i++)
        filename += std::toupper(name[i]);
    filename += ".replace";
    return filename;
}

std::string search_and_replace(std::string line, const char * const  search, const char * const  replace)
{
    int i = 0;
    int len = line.length();
    std::size_t found;
    int search_len = std::string(search).length();
    std::string final = "";
    
    while (i < len)
    {
        found = line.find(search, i, search_len);
        if (found == (size_t) i)
        {
            i += search_len;
            final += replace;
        }
        else
        {
            final += line[i];
            i += 1;
        }
    }
    return final;
}

void replace(char **argv)
{
    std::ifstream ifs(argv[1]);
    std::ofstream ofs(create_filename(argv[1]));
    std::string line;
    std::string res;

    while (getline(ifs, line))
    {
        res = search_and_replace(line, argv[2], argv[3]);
        ofs << res << std::endl;
    }
    ifs.close();
    ofs.close();
}

int main( int argc, char **argv )
{
    if (argc != 4 || argc > 4)
    {  
        std::cout << "Not enough argument given !" << std::endl;
        return 0;
    }
    if (!check_input(argv))
    {
        std::cout << "One of the parameter is not a string" << std::endl;
        return 0;
    }
    else
        replace(argv);
    return 1;
}