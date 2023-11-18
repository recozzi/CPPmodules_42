/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:04:47 by recozzi           #+#    #+#             */
/*   Updated: 2023/11/17 16:53:11 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main ()
{
    Point   inside(3, 1);
    Point   outside(10, 10);
    Point   vertex(2, 6); //outside
	Point	edge(2, 0); //outside
    
    bool    insidePoint = bsp( Point(0, 0), Point(2, 6), Point(4, 0), inside);
    bool    outsidePoint = bsp( Point(0, 0), Point(2, 6), Point(4, 0), outside);
    bool    vertexPoint = bsp( Point(0, 0), Point(2, 6), Point(4, 0), vertex);
	bool	edgePoint = bsp( Point(0, 0), Point(2, 6), Point(4, 0), edge);

    std::cout << std::endl;

    std::cout << "Point(3, 1) is " << (insidePoint ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point(10, 10) is " << (outsidePoint ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point(2, 6) is " << (vertexPoint ? "inside" : "outside") << " the triangle" << std::endl;
    std::cout << "Point(2, 0) is " << (edgePoint ? "inside" : "outside") << " the triangle" << std::endl;
    
    std::cout << std::endl;

    return 0;
}
