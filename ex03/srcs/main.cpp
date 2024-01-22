/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/22 12:17:38 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>


int main() {
    Point a(0.0F, 0.0F);
    Point b(1.0F, 0.0F);
    Point c(0.5F, 1.0F);

    Point insidePoint(0.3F, 0.3F);
    Point outsidePoint(-0.61F, 1.58F);

    std::cout << "Is inside point inside the triangle? " << std::boolalpha << bsp(a, b, c, insidePoint) << std::endl;
    std::cout << "Is outside point inside the triangle? " << std::boolalpha << bsp(a, b, c, outsidePoint) << std::endl;

    return 0;
}