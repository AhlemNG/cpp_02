/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:12:05 by anouri            #+#    #+#             */
/*   Updated: 2024/01/10 14:31:06 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fixed.hpp"
#include <iostream>

int Fixed::_nbbits = 8;

Fixed::Fixed(): _value(0)/*default constructor*/
{
    std::cout << "default constructor called" << std::endl;    
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "copy constructor called" << std::endl; 
    *this = src;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "copy assignment operator called" << std::endl; 
    this->_value = rhs.getRawBits(); 
    return (*this);
    
}

Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;    
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member fucntion called" << std::endl; 
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}