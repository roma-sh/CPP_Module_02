/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:51:23 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 22:48:05 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main( void )
{

Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

// Fixed a;
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// a = Fixed( 1234.4321f );

// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// std::cout << "==============================================" <<std::endl;

// Fixed first(3.5f);
// Fixed second(2.25f);
// Fixed result;
// result = first * second;
// std::cout << "first in float is: " <<first.toFloat()<<std::endl;
// std::cout << "second in float is: " <<second.toFloat()<<std::endl;
// std::cout << "result in float is: " <<result.toFloat()<<std::endl;
// std::cout << "result in int is: " <<result.toInt()<<std::endl;

// std::cout << "==============================================" <<std::endl;
// first = 100.25f;
// second = 2;
// result = first / second;
// std::cout << "result in int is: " <<result.toFloat()<<std::endl;
// std::cout << "==============================================" <<std::endl;
// Fixed increment(25.25f);
// std::cout<<"before the post increament: " << increment.toFloat()<<std::endl;
// increment++;
// std::cout<<"after the post increament: " << increment.toFloat()<<std::endl;
// ++increment;
// std::cout<<"after the pre increament: " << increment.toFloat()<<std::endl;

// Fixed a(3.5f);
// Fixed b(2.25f);
// Fixed c(1.1f);
// Fixed d = ((a - b) * (a + b)) - ((c - b) * (c + b));
// std::cout<< "the number is :" << d <<std::endl;
return 0;
}
