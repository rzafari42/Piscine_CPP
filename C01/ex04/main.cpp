/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:50:10 by rzafari           #+#    #+#             */
/*   Updated: 2021/06/29 17:18:23 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int check_input(char **argv)
{
    for (int i = 1; i <= 3; i++)
    {
        
        if (argv[i][0] == '\0')
            return 0;
    }
    return 1;
}

std::string create_filename(char *name)
{
    std::string filename = "";

    for (int i = 0; i < (int)std::strlen(name); i++)
        filename += toupper(name[i]);
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
    std::string line;
    std::string res;

    if (!ifs.is_open())
    {
        std::cout << "File does not exist" << std::endl;
        return;
    }
    std::ofstream ofs(create_filename(argv[1]));
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
        return -1;
    }
    if (!check_input(argv))
    {
        std::cout << "One of the parameter is empty" << std::endl;
        return -1;
    }
    else
        replace(argv);
    return 0;
}