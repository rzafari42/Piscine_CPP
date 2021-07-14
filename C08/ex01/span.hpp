/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:59:43 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/13 12:18:45 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <exception>
# include <vector>

class Span
{
    private:
        unsigned int     _size;
        std::vector<int> _tab;
    protected:
        Span();
    public:
        Span( unsigned int N );
        Span(Span const& src);
        ~Span();
        Span & operator=(Span const& rhs);

        void addNumber(int numtoadd);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        std::vector<int> copytab() const;

        void addHuge(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif