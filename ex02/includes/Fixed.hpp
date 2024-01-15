/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:35:00 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 15:46:02 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Orthodox canonical form:
    the calss must contain at least:
    - 1 default constructor
    - 2 copy constructor
    - 3 copy assignment operator
    - 4 destructor
*/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static  int const _nbbits = 8;
    public:
        Fixed(); // 1 deFault cosntructor
        Fixed(Fixed const & src); // 2 copy constructor cosntructor
        Fixed & operator=(Fixed const & rhs); // 3 copy asssgniment operator
        ~Fixed(); // 4 destrutor
        
        int getRawBits(void) const;
        void setRawBits( int const raw );
        
        Fixed(int const value); // integer constructor
        Fixed(float const value); // float constructor
        
        float toFloat(void) const;
        int toInt(void) const;
        
        /*comparaison operators*/
        bool operator>(Fixed const & rhs); 
        bool operator<(Fixed const & rhs);
        bool operator>=(Fixed const & rhs);
        bool operator<=(Fixed const & rhs);
        bool operator==(Fixed const & rhs);
        bool operator!=(Fixed const & rhs);
        /*arithmetic operators*/
        Fixed  operator+(Fixed const & rhs) const; 
        Fixed  operator-(Fixed const & rhs) const;
        Fixed  operator*(Fixed const & rhs) const;
        Fixed  operator/(Fixed const & rhs) const;
        /*pre-incremetation operators*/
        Fixed & operator++(); 
        /*post-incremetation operators*/
        Fixed operator++(int); 
        /*pre-decremetation operators*/
        Fixed & operator--(); 
        /*post-decremetation operators*/
        Fixed operator--(int); 
        /*****/
        static Fixed & min(Fixed &  a, Fixed & b);
        static Fixed const & min(Fixed const &  a, Fixed const & b);

        static Fixed & max(Fixed &  a, Fixed & b);
        static Fixed const & max(Fixed const &  a, Fixed const & b);
    };

    std::ostream &operator<<(std::ostream& o, Fixed const& rhs);

#endif