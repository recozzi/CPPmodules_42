/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:58:22 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/04 18:47:40 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:

		const Fixed	_x;
		const Fixed	_y;

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& src);
	
		~Point(void);

		Point&	operator=(const Point& rhs);

		float	getX(void) const;
		float	getY(void) const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
