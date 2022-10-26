/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:28:12 by eulker            #+#    #+#             */
/*   Updated: 2022/10/01 15:59:26 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
	int					fixedPointValue;
	static const int	bits = 8;

public:

	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &copy);

	~Fixed();

	Fixed	&operator=(const Fixed &src);
	bool	operator<(Fixed src);
	bool	operator<=(Fixed src);
	bool	operator>(Fixed src);
	bool	operator>=(Fixed src);
	bool	operator==(Fixed src);
	bool	operator!=(Fixed src);

	float	operator+(Fixed src);
	float	operator-(Fixed src);
	float	operator*(Fixed src);
	float	operator/(Fixed src);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed	max(const Fixed &a, const Fixed &b);
	static Fixed	min(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif