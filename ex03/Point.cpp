/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:05:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 21:54:55 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0)
{

}

Point::Point(float x_in, float y_in) : x(x_in), y(y_in)
{

}

Point::~Point()
{

}

Point::Point(const Point& original) : x(original.x), y(original.y)
{

}
// Since x and y are const, we cannot
// modify them once they are initialized. This means that we cannot assign new
// values to x and y after the object has been created
// that makes the assignment operator unnecessary or unusable,
Point& Point::operator=(const Point& original)
{
	(void) original;
	return *this;
}


Fixed Point::getX(void) const
{
	return this->x;
}
Fixed Point::getY(void) const
{
	return this->y;

}
