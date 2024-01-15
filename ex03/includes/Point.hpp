/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:52:07 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 17:52:02 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    // Point(Point const &src);
    Point & operator=(Point const rhs);
    ~Point();

    Point(Fixed const xx, Fixed const yy);
    
    Fixed const getX() const;
    Fixed const getY() const;
    void setX(Fixed const x);
    void setY(Fixed const y);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif