/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:27 by eulker            #+#    #+#             */
/*   Updated: 2022/10/01 15:29:28 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point {

	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point(void);
		Point(Point const &b);
		Point(Fixed const &x, Fixed const &y);

		Point		&operator=(Point const &b);
		Fixed const	&getX(void);
		Fixed const	&getY(void);

		~Point();
};

bool	bsp(Point &a, Point &b, Point &c, Point &point);

#endif
