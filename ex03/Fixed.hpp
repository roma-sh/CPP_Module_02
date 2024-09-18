/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:51:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/17 21:18:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <fstream>
#include <cmath>

class Fixed
{
	private:
		int					number;
		static const int	fract = 8;
	public:
		Fixed();
		Fixed(const int int_number);
		Fixed(const float float_number);
		~Fixed();
		Fixed(const Fixed &original);
		Fixed& operator=(const Fixed &original);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;


		bool operator<(const Fixed& right_side) const;
		bool operator<=(const Fixed& right_side) const;
		bool operator>(const Fixed& right_side) const;
		bool operator>=(const Fixed& right_side) const;
		bool operator==(const Fixed& right_side) const;
		bool operator!=(const Fixed& right_side) const;
		Fixed operator+(const Fixed& right_side) const;
		Fixed operator-(const Fixed& right_side) const;
		Fixed operator*(const Fixed& right_side) const;
		Fixed operator/(const Fixed& right_side) const;
		Fixed& operator++();
		Fixed operator++(int origin);
		Fixed& operator--();
		Fixed operator--(int origin);
		static Fixed& min(Fixed& num1, Fixed& num2);
		static const Fixed& min(const Fixed& num1, const Fixed& num2);
		static Fixed& max(Fixed& num1, Fixed& num2);
		static const Fixed& max(const Fixed& num1, const Fixed& num2);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);



// for member functions like comparison operators < , the left-hand side object is implicitly accessible via this,
// but the right-hand side object must be passed as a parameter.
// For non-member functions like the insertion operator <<,
//both parameters must be passed explicitly because neither is implicitly accessible.
