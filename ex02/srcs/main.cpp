/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/15 15:57:04 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a(10);
    Fixed const b(Fixed(0.05f) * Fixed(2));
    Fixed const c(10);
    Fixed const d(0);
    std::cout << a << std::endl; /*prints a*/
    std::cout << ++a << std::endl; /*increments a and then prints it*/
    std::cout << a << std::endl; /*print a (incremented)*/
    std::cout << a++ << std::endl;/*prints a and the increments it*/
    std::cout << a <<std::endl; /*prints a incremented*/
    
    std::cout << a-- << std::endl; /*prints a and then decrements it*/
    std::cout << a <<std::endl; /*prints a*/
    std::cout << --a << std::endl; /*decrements a and then prints it*/
    std::cout << a <<std::endl; /*prints a*/
    
    std::cout << b <<std::endl;

    std::cout << (a > b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a >= c) << std::endl;
    std::cout << (a <= c) << std::endl;
    std::cout << (a == d) << std::endl;
    std::cout << (a != d) << std::endl;
    std::cout << "min of a and b is " << Fixed::min(a, b) <<std::endl;
    std::cout << "max of a and b is " << Fixed::max(a, b) <<std::endl;
 
    return 0;
}