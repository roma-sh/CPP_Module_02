/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:06:19 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 21:46:41 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(float x_in, float y_in);
		~Point();
		Point(const Point& original);
		Point& operator=(const Point& original);
		// const Fixed& getX(void) const;
		// const Fixed& getY(void) const;
Fixed	getX(void) const;
Fixed	getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);
