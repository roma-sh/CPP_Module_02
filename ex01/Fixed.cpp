/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:12:01 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/10 18:50:57 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	number = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int int_number)
{
	std::cout << "Int constructor called" << std::endl;
	number = int_number * ( 1 << fract); // 5 * (1 << 8);  // 5 * 256 = 1280
										// shifting the bites to to lift means
										// the number will multiply 2
										// 1 << 1 = 1 * 2
										// 1 << 2 = 1 * 2 * 2 = 1* 2^2 shifting twic
}

Fixed::Fixed(const float float_number)
{
	std::cout << "Float constructor called" << std::endl;
	number = roundf(float_number * (1 << fract));
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original) // to prevent copying the same object
		number = original.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}
void Fixed::setRawBits( int const raw )
{
	number = raw;;
}

float Fixed::toFloat( void ) const
{
	return (float)(number / (float) (1 << fract));
}

int Fixed::toInt( void ) const
{
	return	(number >> fract);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    // Use the public method to access the float representation
    os << fixed.toFloat();  // or fixed.toFloat();
    return os;
}
