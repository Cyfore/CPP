/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:15 by eulker            #+#    #+#             */
/*   Updated: 2022/10/01 15:29:16 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
			int					_fixed_point;
			static const int	_frac_bits = 8;

	public:
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;

			Fixed(void);
			Fixed(const	Fixed &f);
			Fixed(const int num);
			Fixed(const float num);
			~Fixed(void);
			Fixed				&operator=(Fixed const &f);
			bool				operator>(Fixed const &f);
			bool				operator<(Fixed const &f);
			bool				operator>=(Fixed const &f);
			bool				operator<=(Fixed const &f);
			bool				operator==(Fixed const &f);
			bool				operator!=(Fixed const &f);
			Fixed				operator+(Fixed const &f);
			Fixed				operator-(Fixed const &f);
			Fixed				operator*(Fixed const &f);
			Fixed				operator/(Fixed const &f);
			Fixed				&operator++(void);
			Fixed				&operator--(void);
			Fixed				operator++(int);
			Fixed				operator--(int);
			static Fixed		&min(Fixed &a, Fixed &b);
			static Fixed		&max(Fixed &a, Fixed &b);
			static Fixed const	&min(Fixed const &a, Fixed const &b);
			static Fixed const	&max(Fixed const &a, Fixed const &b);
};
std::ostream	&operator<<(std::ostream &o, const Fixed &f);

#endif
