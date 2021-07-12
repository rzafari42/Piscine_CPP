/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 09:34:21 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/12 19:49:48 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack<T> const& src);
        ~MutantStack();
        MutantStack<T> & operator=(MutantStack<T> const& rhs);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator  begin() { return (this->c.begin()); };
        iterator  end() { return (this->c.end()); };
};

#endif