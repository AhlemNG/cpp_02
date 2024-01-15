/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:12:05 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 16:19:07 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(): _value(0)/*default constructor*/
{
    // std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) /*copy constructor*/
{
    // std::cout << "copy constructor called" << std::endl; 
    // *this = src;
    _value = src.getRawBits();
}

Fixed & Fixed::operator=(Fixed const &rhs)/*assignment operator*/
{
    // std::cout << "copy assignment operator called" << std::endl; 
    // if (this == &f)
    //     return *this; why??
    this->_value = rhs.getRawBits(); 
    return (*this);
}

Fixed::~Fixed() /*destructor*/
{
    // std::cout << "destructor called" << std::endl;    
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed::Fixed(float const value)
{
    // std::cout << "float constructor called" << std::endl;
    this->_value = roundf(value * (1 << _nbbits)); 
}

Fixed::Fixed(int const value)
{
    // std::cout << "int constructor called" << std::endl;
    this->_value = value * ( 1 << _nbbits);
}

float Fixed::toFloat(void) const
{
    return ((float) this->_value / (1 << _nbbits));
}

int Fixed::toInt(void) const
{
    return  (this->_value >>_nbbits);
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return(o);
}
/*comparaison operators**********************************************/
bool Fixed::operator>(Fixed const & rhs)
{
    return(this->toFloat() > rhs.toFloat());
}
bool Fixed::operator<(Fixed const & rhs)
{
    return(this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const & rhs)
{
    return(this->toFloat() >= rhs.toFloat());
}
bool Fixed::operator<=(Fixed const & rhs)
{
    return(this->toFloat() <= rhs.toFloat());
}
bool Fixed::operator==(Fixed const & rhs)
{
    return(this->toFloat() == rhs.toFloat());
}
bool Fixed::operator!=(Fixed const & rhs)
{
    return(this->toFloat() != rhs.toFloat());
}

/*arithmetic operators*********************************************************/
Fixed Fixed::operator+(Fixed const &rhs) const
{
    // std::cout << "Addition operator called with " << this->_value;
    return (Fixed(this->_value + rhs.getRawBits())); // revoie une copie
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
    // std::cout << "substraction operator called with " << this->_value;
    return (Fixed(this->_value - rhs.getRawBits())); // revoie une copie
}

Fixed  Fixed::operator*(Fixed const & rhs) const
{
    // std::cout << "multiplication operator called with " << this->_value;
    return (Fixed(this->toFloat() * rhs.toFloat())); // revoie une copie
}

Fixed  Fixed::operator/(Fixed const & rhs) const
{
    // std::cout << "division operator called with " << this->_value;
    return (Fixed(this->toFloat() / rhs.toFloat())); // revoie une copie
}

/*pre-incremetation operators*/
Fixed & Fixed::operator++()
{
    // std::cout << "pre-incrementation operator called with " << this->_value;
    this->_value ++;
    return (*this);
} 

/*post-incremetation operators*/
Fixed Fixed::operator++(int)
{
    // std::cout << "post-incrementation operator called with " << this->_value;
    /*create a copy of the original instance */
    Fixed cpy_original(*this);
    /*increment actual instance*/
    this->_value ++;
    return (cpy_original);
}

/*pre-decremetation operators*/
Fixed & Fixed::operator--()
{
    // std::cout << "pre-decrementation operator called with " << this->_value;
    this->_value --;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    // std::cout << "post-incrementation operator called with " << this->_value;
    /*create a copy of the original instance */
    Fixed cpy_original(*this);
    /*increment actual instance*/
    this->_value --;
    return (cpy_original);
}

/************************************************************************/

Fixed  & Fixed::min(Fixed &  a, Fixed  & b)
{
    return ((a < b) ? a : b);
}

Fixed const & Fixed::min(Fixed const &  a, Fixed const & b)
{
    return (( (Fixed&)a < (Fixed&)b) ? (Fixed&)a : (Fixed&)b);
}

/*************************************************************************/
Fixed const & Fixed::max(Fixed const &  a, Fixed const & b)
{
    return (( (Fixed&)a > (Fixed&)b) ? (Fixed&)a : (Fixed&)b);
}
    
Fixed  & Fixed::max(Fixed &  a, Fixed  & b)
{
    return ((a > b) ? a : b);
}    