/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:01:57 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 17:53:38 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point():x(), y()
{
    std::cout << "Point default constructor called" << std::endl; 
}

Point::~Point()
{
    std::cout << "Point default desstructor called" << std::endl;
}

// Point::Point(Point const &src)
// {
//     std::cout << "Point copy constructor called" << std::endl; 
//     *this = src;
// }

Point & Point::operator=(Point const rhs)
{
    std::cout << "Point copy assignment operator called" << std::endl; 
    Fixed(this->x) = rhs.x;
    Fixed(this->y) = rhs.y;
    return (*this);
}

Point::Point(Fixed const xx, Fixed const yy)
{
    std::cout << "Point  constructor called" << std::endl; 
    this->setX(xx);
    this->setY(yy);   
}

Fixed const Point::getX() const
{
    return(this->x);
}
Fixed const Point::getY() const
{
    return(this->y);
}

void Point::setX(Fixed const x)
{
    (Fixed)this->x = x;
}
void  Point::setY(Fixed const y)
{
    (Fixed)this->y = y;
}