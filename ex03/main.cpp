/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:51:23 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 21:47:08 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

int main()
{
    // Define points of the triangle
    Point a(0.0f, 0.0f);  // Vertex A at (0, 0)
    Point b(5.0f, 0.0f);  // Vertex B at (5, 0)
    Point c(2.5f, 5.0f);  // Vertex C at (2.5, 5)

    // Define points to test
    Point p1(2.5f, 2.0f);  // Point clearly inside
    Point p2(0.0f, 0.0f);    // Point on vertex A
    Point p3(2.5f, 5.0f);  // Point on vertex C
    Point p4(5.0f, 5.0f);    // Point clearly outside

    // Test points
    std::cout << "Point p1 is " << (bsp(a, b, c, p1) ? "inside" : "outside") << " the triangle." << std::endl;
	std::cout << "================================" <<std:: endl;
    std::cout << "Point p2 is " << (bsp(a, b, c, p2) ? "inside" : "outside") << " the triangle." << std::endl;
	std::cout << "================================" <<std:: endl;
    std::cout << "Point p3 is " << (bsp(a, b, c, p3) ? "inside" : "outside") << " the triangle." << std::endl;
	std::cout << "================================" <<std:: endl;
    std::cout << "Point p4 is " << (bsp(a, b, c, p4) ? "inside" : "outside") << " the triangle." << std::endl;

    return 0;
}

// int main( void ) {
// 	Point	a(0, 0);
// 	Point	b(10, 0);
// 	Point	c(0, 10);
// 	Point	p1(0, 0);
// 	Point	p2(10.1, 0);
// 	Point	p3(0, 10);
// 	Point	p4(3, 3);
// 	Point	p5(5.5, 5.5);
// 	Point	p6(5, 5);

// 	std::cout << "p1 in triangle:\t\t" << bsp(a,b,c,p1) << std::endl;

// 	std::cout << "p2 in triangle:\t\t" << bsp(a,b,c,p2) << std::endl;

// 	std::cout << "p3 in triangle:\t\t" << bsp(a,b,c,p3) << std::endl;

// 	std::cout << "p4 in triangle:\t\t" << bsp(a,b,c,p4) << std::endl;

// 	std::cout << "p5 in triangle:\t\t" << bsp(a,b,c,p5) << std::endl;

// 	std::cout << "p6 in triangle:\t\t" << bsp(a,b,c,p6) << std::endl;

// 	return 0;
// }

