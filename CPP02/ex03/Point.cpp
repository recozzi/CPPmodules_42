/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:58:18 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 19:21:25 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) { }

Point::Point(const float x, const float y) : _x(x), _y(y) { }

Point::Point(const Point& src) { *this = src; }

Point::~Point(void) { }

Point&	Point::operator=(const Point& rhs)
{
	if (this != &rhs)
	{
		const_cast<Fixed&>(_x) = rhs.getX();
		const_cast<Fixed&>(_y) = rhs.getY();
	}
	return *this;
}

float	Point::getX(void) const { return (_x.toFloat()); }

float	Point::getY(void) const { return (_y.toFloat()); }
