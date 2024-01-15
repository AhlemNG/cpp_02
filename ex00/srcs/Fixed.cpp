/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:12:05 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 15:55:24 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(): _value(0)/*default constructor*/
{
    std::cout << "default constructor called" << std::endl;    
}

Fixed::Fixed(Fixed const & src) /*copy constructor*/
{
    std::cout << "copy constructor called" << std::endl; 
    *this = src;
    // _value = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const &rhs) /*copy assignment operator*/
{
    std::cout << "copy assignment operator called" << std::endl; 
    this->_value = rhs.getRawBits(); 
    return (*this);
}

Fixed::~Fixed() /*destructor*/
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