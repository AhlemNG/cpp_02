/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:10:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/12 18:13:18 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*otrthodox canoncal form*/
#include "../includes/fixed.hpp"
#include <iostream>

int main()
{
    Fixed a(1234.421f);
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    // a = Fixed(1234.421f);
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as an integer" <<std::endl;
    std::cout << "b is " << b.toInt() << " as an integer" <<std::endl;
    std::cout << "c is " << c.toInt() << " as an integer" <<std::endl;
    std::cout << "d is " << d.toInt() << " as an integer" <<std::endl;

    return 0;
}