/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/19 15:04:28 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

int main(void)
{
    Point const a(10, 10);
    Point const b(3, 15);
    Point const c(2, 6);
    // Point const d(8, 11);
    Point const d(5,10);
    
    std::cout << std::boolalpha << bsp(a, b, c, d) <<std::endl;
    return 0;
}