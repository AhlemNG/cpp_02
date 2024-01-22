/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:22:36 by anouri            #+#    #+#             */
/*   Updated: 2024/01/22 12:12:11 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>


/*returns true if point is in triangle abc othewise returns false*/

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1 = ((point.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - b.getY().toFloat()) - (a.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()));
	float d2 = ((point.getX().toFloat() - c.getX().toFloat()) * (b.getY().toFloat() - c.getY().toFloat()) - (b.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat()));
	float d3 = ((point.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat()) - (c.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()));
	
	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	
	return (!(has_neg && has_pos));
}

/*d1 orientation de P par rapport a l'arrete [ab]
    si d1 < 0 => le point est a gauche
    si d1 > 0 => le point est a droite
*/


/*d2 orientation de P par rapport a l'arrete [bc]
    si d2 < 0 => le point est a gauche
    si d2 > 0 => le point est a droite
*/


/*d3 orientation de P par rapport a l'arrete [ec]
    si d3 < 0 => le point est a gauche
    si d3 > 0 => le point est a droite
*/

/*If at least one determinant is negative and at least one determinant is positive, the point is outside the triangle.

If all determinants have the same sign (either all positive or all negative), the point is inside the triangle.

If any determinant is zero, it might indicate that the point is on an edge of the triangle.*/