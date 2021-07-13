/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzafari <rzafari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:57:25 by rzafari           #+#    #+#             */
/*   Updated: 2021/07/13 11:00:29 by rzafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Awesome {
	public:
		Awesome( void ) {return;};
	
    	Awesome( int n ) : _n( n ) {}
        Awesome( Awesome const& src ) { *this = src; return;}
        ~Awesome() { return; }
        Awesome & operator=( Awesome const& rhs ) { if (this != &rhs) { this->_n = rhs._n; } return *this; };

		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

		int get_n(void) const { return (_n); }

	private:
		int _n;
};

std::ostream & operator<<(std::ostream &flux, const Awesome &src) { flux << src.get_n(); return flux; }

template<typename T>
void swap(T &v1, T &v2)
{
    T v3;

    v3 = v1;
    v1 = v2;
    v2 = v3;
}

template<typename T> 
T const min(T &v1, T &v2)
{
    return ((v1 < v2) ? v1 : v2);
}

template<typename T> 
T const max(T &v1, T &v2)
{
    return ((v1 > v2) ? v1 : v2);
}

#endif