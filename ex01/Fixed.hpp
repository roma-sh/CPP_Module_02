/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:08:09 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/10 18:36:05 by rshatra          ###   ########.fr       */
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
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
