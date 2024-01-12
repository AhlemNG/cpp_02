/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:35:00 by anouri            #+#    #+#             */
/*   Updated: 2024/01/12 18:16:40 by anouri           ###   ########.fr       */
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
        /* data */
        int _value;
        static const int _nbbits = 8;
    public:
        Fixed(/* args */); // 1 deFault cosntructor
        Fixed(Fixed const & src); // 2 copy constructor cosntructor
        Fixed(int const value); // integer constructor
        Fixed(float const value); // float constructor
        /*takes */
        Fixed & operator=(Fixed const & rhs); // 3 copy asssgniment operator
        ~Fixed(); // 4 destrutor
        int getRawBits(void) const;
        void setRawBits( int const raw );
        float toFloat(void) const;
        int toInt(void) const;
        /*an overload of the insetion (<<) operator*/
    };
    std::ostream &operator<<(std::ostream& o, Fixed const& rhs);

/*An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.*/

#endif