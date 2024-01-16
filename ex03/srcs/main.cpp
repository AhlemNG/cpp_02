/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/16 10:27:45 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"
#include <iostream>

int main(void)
{
    Point const a(10, 10);
    Point const b(15, 20);
    Point const c(7, 5);
    Point const d(8, 11);
    
    std::cout << std::boolalpha << bsp(a, b, c, d) <<std::endl;
    return 0;
}