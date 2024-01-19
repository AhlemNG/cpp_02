/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:22:36 by anouri            #+#    #+#             */
/*   Updated: 2024/01/19 15:08:52 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>
/*returns true if point is in triangle abc othewise returns false*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed W1(2);
    Fixed W2(1);
 
    std::cout << "a.x is " << a.getX() << std::endl;
    
    W1 = (a.getX()*(c.getY()-a.getY()) + (point.getY()-a.getY())*(c.getX()-a.getX()) - point.getX()*(c.getY()-a.getY())) /((b.getY()-a.getY())*((c.getX()- (a.getX()))-(b.getX()-a.getX())*(c.getY()-a.getY())));
    std::cout << "W1 is " << W1 << std::endl;
    W2 = point.getY() - a.getY() - W1 *(b.getY()-a.getY()) / (c.getY() - a.getY());
    std::cout << "W2 is " << W2 << std::endl; 
    return ((W1>= 0 && W2 >= 0 && W1+W2 <= 1) ? true : false);
}
