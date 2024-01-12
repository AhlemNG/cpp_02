/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:12:05 by anouri            #+#    #+#             */
/*   Updated: 2024/01/12 18:25:17 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fixed.hpp"
#include <iostream>
#include <cmath>

// int Fixed::_nbbits = 8;

Fixed::Fixed(): _value(0)/*default constructor*/
{
    std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) /*copy constructor*/
{
    std::cout << "copy constructor called" << std::endl; 
    // *this = src;
    _value = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const &rhs)/*assignment operator*/
{
    std::cout << "copy assignment operator called" << std::endl; 
    this->_value = rhs.getRawBits(); 
    return (*this);
}

Fixed::Fixed(int const value)
{
    std::cout << "int constructor called" << std::endl;
    this->_value = value << _nbbits;
    /*equivalent to (value * 2 ^ 8)*/
}

Fixed::Fixed(float const value)
{
    std::cout << "float constructor called" << std::endl;
    this->_value = roundf(value * (1 << _nbbits));
    /*equivalent to (value * 1 * 2 ^ 8)*/
}

Fixed::~Fixed() /*destructor*/
{
    std::cout << "destructor called" << std::endl;    
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
      return (float)_value / (1 << _nbbits);
}

int Fixed::toInt(void) const
{
    /*pour convertir un nombre a virgule en un entier 
    on prend sa partie entiere*/
    /*decalage a droite c'est equivalent a : */
    return roundf(_value >> _nbbits);
    // return((_value / (1 << _nbbits)));
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return(o);
}