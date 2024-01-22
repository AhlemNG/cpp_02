/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:35:00 by anouri            #+#    #+#             */
/*   Updated: 2024/01/22 12:19:19 by anouri           ###   ########.fr       */
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
 
class Fixed
{
    private:
        int _value;
        static const int _nbbits = 8;
    public:
        Fixed(); // 1 deFault cosntructor
        Fixed(Fixed const & src); // 2 copy constructor cosntructor
        Fixed & operator=(Fixed const & rhs); // 3 copy asssgniment operator
        ~Fixed(); // 4 destrutor
        
        int getRawBits(void) const;
        void setRawBits( int const raw );
    };

#endif
