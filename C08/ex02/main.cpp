/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:34:04 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/12 19:49:45 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"
#include "Mutantstack.cpp"
#include <iostream>
#include <iomanip>
#include <list>

int main()
{
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "mstack test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(3); 
    mstack.push(5);
    mstack.push(737); //[...] 
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    std::stack<int> s(mstack);
    //std::cout << s.top() << std::endl;
    //std::cout << std::endl;

    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "list container test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    
    std::cout << lst.back() << std::endl;
    
    lst.pop_back();
    
    std::cout << lst.size() << std::endl;
    std::cout << std::endl;
    lst.push_back(3); 
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    
    std::list<int>::iterator it_l = lst.begin();
    std::list<int>::iterator it_le = lst.end();

    while (it_l != it_le)
    {
        std::cout << *it_l << std::endl;
        ++it_l;
    }

    std::cout << std::endl;

    return 0;
}