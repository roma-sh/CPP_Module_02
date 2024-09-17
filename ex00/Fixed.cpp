/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:12:01 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/16 17:24:53 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	number = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
// passing by value is making a copy of the variable
// that we are passing, but how to make a copy of
// this object we are passing if we already creating
// a copy constructor ? that why we are passing
// by reference, we are passing the object itself not
// a copy of it .. we don't have a copy function yet
//						|
//						V
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
