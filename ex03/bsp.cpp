/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:06:16 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/18 23:30:34 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed cross_pro;
	cross_pro = ((b.getX() - a.getX()) * (point.getY() - a.getY()))- ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	if (cross_pro.toFloat() <= 0.0f)
		return (false);
	cross_pro = ((c.getX() - b.getX()) * (point.getY() - b.getY()))- (c.getY() - b.getY()) * (point.getX() - b.getX());
	if (cross_pro.toFloat() <= 0.0f)
		return (false);
	cross_pro = ((a.getX() - c.getX()) * (point.getY() - c.getY()))- (a.getY() - c.getY()) * (point.getX() - c.getX());
	if (cross_pro.toFloat() <= 0.0f)
		return (false);
	return (true);
}


//A(1,1)   B(5,1)   C(3,4)    P(3,2)

// AB(x,y) = ((5 - 1) , (1 - 1)) = (4 , 0)
// AP = (3 - 1, 2 - 1) = (2 , 1)

// Cross Product = (XB - XA) * (YP - YA) - (YB - YA) * (XP - XA)
// Cross Product = ABx * APy - ABy * APx
// Cross Product = (4 * 1) - (0 * 2) = 4 - 0 = 4

// If the cross product is positive, it means that point P is to the left
// of the directed line from A to B .
// If any of the cross products is negative, the point is to the right of the line AB.
// If the cross product is zero for any edge, the point lies exactly on that edge.

// if the point in the left side for all vectors AB , BC , CA (positive Cross Product)
// that means it is inside the triangle
//
//						C
//						o

//				 /			 \
//				/			  \
//			   /   			   \
//			  /					\
//			 /					 \
//			/					  \
//		   /					   \
//		  /			  o				\
//		 /			  P			     \
//		/							  \
//     o-------------------------------o
//	   A								B
