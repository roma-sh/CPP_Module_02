/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:12:11 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/09 16:41:34 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private:
		int					number;
		static const int	fract = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed& operator=(const Fixed &original);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
