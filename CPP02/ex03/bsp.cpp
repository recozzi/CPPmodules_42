/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:58:46 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/18 13:14:55 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float ft_pow(float base, int exponent)
{
    if (exponent == 0)
        return 1.0;
    float result = 1.0;
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}

static float ft_abs(float x)
{
	return (x < 0) ? -x : x;
}

static float ft_sqrt(float x)
{
    if (x == 0 || x == 1) 
        return x;
    float guess = x / 2;
    while (ft_abs(guess * guess - x) > 0.0001)
        guess = 0.5 * (guess + x / guess);
    return guess;
}

static float	lenSide(const Point side1, const Point side2)
{
	float	lenSide;

	lenSide = ft_sqrt(ft_pow((side2.getX() - side1.getX()), 2) + ft_pow((side2.getY() - side1.getY()), 2));
	return lenSide;
}

static float	area(const float perimeter, const float side1, const float side2, const float side3)
{
	float	area;

	area = ft_sqrt(perimeter * (perimeter - side1) * (perimeter - side2) * (perimeter - side3));
	return area;
}

static float	perimeter(const float side1, const float side2, const float side3)
{
	float	perimeter;

	perimeter = (side1 + side2 + side3) / 2;
	return perimeter;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	float	AB = lenSide(a, b);
	float	BC = lenSide(b, c);
	float	CA = lenSide(c, a);

	float	S = perimeter(AB, BC, CA);
	
	float	A = area(S, AB, BC, CA);
	
	float	PA = lenSide(point, a);
	float	PB = lenSide(point, b);
	float	PC = lenSide(point, c);

	float	S1 = perimeter(PA, AB, PB);
	float	S2 = perimeter(PB, BC, PC);
	float	S3 = perimeter(PC, CA, PA);

	float	A1 = area(S1, PA, AB, PB);
	float	A2 = area(S2, PB, BC, PC);
	float	A3 = area(S3, PC, CA, PA);
	
	if (A1 != 0 && A2 != 0 && A3 != 0 && ft_abs(A - (A1 + A2 + A3)) < 0.0001)
		return true;
	
	return false;
}
