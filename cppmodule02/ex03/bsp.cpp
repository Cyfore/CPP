/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:28:59 by eulker            #+#    #+#             */
/*   Updated: 2022/10/01 15:29:00 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point &p1, Point &p2, Point &p3)
{

	return ((p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) -
	(p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat()));
}

bool bsp(Point &a, Point &b, Point &c, Point &point)
{
	float	A = sign(point, a, b);
	float	B = sign(point, b, c);
	float	C = sign(point, c, a);
	bool	neg = false;
	bool	pos = false;

	neg = ((A < 0) || (B < 0) || (C < 0));
	pos = ((A > 0) || (B > 0) || (C > 0));
	return !(neg && pos);
}