/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:59:52 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/14 11:59:45 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    Span sp = Span(6);
    Span empty = Span(0);
    Span oneelement = Span(1);
    
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(18);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Too many values ! Overwriting ..." << '\n';
    }
    

    
    oneelement.addNumber(8);
    
    /******************************************************/
    /*              Subject test                         */
    /******************************************************/
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "Subject test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "sp is empty or only have one element" << std::endl;
    }

    /******************************************************/
    /*              Empty test                            */
    /******************************************************/
    std::cout << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "Empty test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    try
    {
        std::cout << "Shortest Span: " << std::endl;
        std::cout << empty.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "'empty' is empty or only have one element" << std::endl;
    }
    try
    {
        std::cout << "Longest Span: " << std::endl;
        std::cout << empty.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "'empty' is empty or only have one element" << std::endl;
    }

    /******************************************************/
    /*              One element test                      */
    /******************************************************/
    std::cout << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "One element test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    try
    {
        std::cout << "Shortest Span: " << std::endl;
        std::cout << oneelement.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "'oneelement' is empty or only have one element" << std::endl;
    }
    try
    {
        std::cout << "Longest Span: " << std::endl;
        std::cout << oneelement.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "'oneelement' is empty or only have one element" << std::endl;
    }

    /******************************************************/
    /*              Overflow test                         */
    /******************************************************/
    std::cout << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "Overflow test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    try
    {
        sp.addNumber(15);
    }
    catch (std::exception &e)
    {
        std::cout << "No more space !" << std::endl;
    }

    /******************************************************/
    /*              10000 test                            */
    /******************************************************/
    std::cout << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "10000 test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    
    std::vector<int> tmp;
    Span    huge(10000);

    for (int i = 0; i < 5000; i++)
    {
        tmp.push_back(i);
        tmp.push_back(i + 1500);
    }
    huge.addHuge(tmp.begin(), tmp.end());
    std::cout << huge.shortestSpan() << std::endl;
    std::cout << huge.longestSpan() << std::endl;
    
    /******************************************************/
    /*              10000 overflow test                   */
    /******************************************************/
    std::cout << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;
    std::cout << "10000 overflow test:" << std::endl;
    std::cout << std::setfill ('-') << std::setw (50);
    std::cout << "" << std::endl;

    try
    {
        huge.addHuge(tmp.begin(), tmp.end());
    }
    catch (std::exception &e)
    {
        std::cout << "Overflow" << std::endl;
    }

}