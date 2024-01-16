/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:22:36 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 10:11:01 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

/*returns true if point is in triangle abc othewise returns false*/

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed W1(2);
    Fixed W2(1);
 
    W1 = (a.getX()*(c.getY()-a.getY()) + (point.getY()-a.getY())*(c.getX()-a.getX()) - point.getX()*(c.getY()-a.getY())) /
        ((b.getY()-a.getY())*((c.getX()- (a.getX()))-(b.getX()-a.getX())*(c.getY()-a.getY())));
    
    W2 = point.getY() - a.getY() - W1 *(b.getY()-a.getY()) /
        (c.getY() - a.getY());
    return ((W1>= 0 && W2 >= 0 && W1+W2 <= 1) ? true : false);
}
