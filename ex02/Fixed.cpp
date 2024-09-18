/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:51:38 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 22:43:01 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ===================================================================================================
//					Constructors:
Fixed::Fixed()
{
	number = 0;
	// std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int int_number)
{
	// std::cout << "Int constructor called" << std::endl;
	number = int_number * ( 1 << fract);
}

Fixed::Fixed(const float float_number)
{
	// std::cout << "Float constructor called" << std::endl;
	number = roundf(float_number * (1 << fract));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed& Fixed::operator=(const Fixed &original)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		number = original.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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

// returning the os it self allow us to use it again in another
// chain of <<
//like: std::cout<<"hello"<< a << "world" << std::endl;
//cout enter the first operation, being updated , return it
// then use it again inthe next operation
// cout -> enter -> os updated to include a and os returned itself not the value of it
// the updated cout enter the next << and "hello" included in, and agian os was returned ... etc.
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat(); // we are witing the number into the ostream object os
	return os;
}

// ===================================================================================================
//					comparison operators:	<	>	>=	<= == !=
// we are passing by reference to avoid copying the object "passing by value will make a copy
// of the object using the copy constructor"
//								|
//								V
bool Fixed::operator<(const Fixed& right_side) const
{
	return (number < right_side.number);
}

bool Fixed::operator<=(const Fixed& right_side) const
{
	return (number <= right_side.number);
}

bool Fixed::operator>(const Fixed& right_side) const
{
	return (number > right_side.number);
}

bool Fixed::operator>=(const Fixed& right_side) const
{
	return (number >= right_side.number);
}

bool Fixed::operator==(const Fixed& right_side) const
{
	return (number == right_side.number);
}


bool Fixed::operator!=(const Fixed& right_side) const
{
	return (!(number == right_side.number));
}

// ===================================================================================================
//				arithmetic operations + - * /
Fixed Fixed::operator+(const Fixed& right_side) const
{
	Fixed z;
	z.number = this->number + right_side.number;
	return (z);
}

Fixed Fixed::operator-(const Fixed& right_side) const
{
	Fixed z;
	z.number = this->number - right_side.number;
	return (z);
}

Fixed Fixed::operator*(const Fixed& right_side) const
{
	Fixed z;
	z.number = (this->number * right_side.number) >> fract;
	//After the multiplication, the result has twice the number of fractional bits, so we need to shift the
	//result right by fract bits (which is 8) to get back to the correct fixed-point representation.
	return (z);
}

Fixed Fixed::operator/(const Fixed& right_side) const
{
	Fixed z;
	if (right_side.number == 0)
		throw std::runtime_error("Division by zero");
	z.number = (this->number << fract) / right_side.number;
	//shift the numerator left by the number of fractional bits (<< fract) to avoid losing precision during the division.
	return (z);
}
// ===================================================================================================
//					4 increment/decrement:


Fixed& Fixed::operator++() //pre-increment ++i;
{
	// this->number = number + (1 << fract); // + 256
	this->number = number + 1 ; // increased the current value by the smallest representable ϵ
	return (*this);
}
Fixed Fixed::operator++(int) // post-increment i++;
{
	Fixed duplicate(*this); // we made a copy of the current object
	// this->number = number + (1 << fract); // increased the current value by 1
	this->number = number + 1 ; // increased the current value by the smallest representable ϵ
	return (duplicate); // return the copy before increament
}

Fixed& Fixed::operator--() //pre-decrement ++i;
{
	this->number = number - 1;
	return (*this);
}
Fixed Fixed::operator--(int) // post-decrement i++;
{
	Fixed duplicate(*this);
	this->number = number - 1;
	return (duplicate);
}
// ===================================================================================================

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1 < num2)
		return	(num1);
	return (num2);
}
const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
	if (num1 < num2)
		return	(num1);
	return (num2);
}
Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1 > num2)
		return	(num1);
	return (num2);
}
const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1 > num2)
		return	(num1);
	return (num2);
}
