/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:28:02 by eulker            #+#    #+#             */
/*   Updated: 2022/10/01 15:59:28 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = number << this->bits;
}

Fixed::Fixed(const float fnumber) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(fnumber * (1 << this->bits));
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointValue = src.getRawBits();
	return (*this);
}

bool	Fixed::operator<(Fixed src) {
	return (this->toFloat() < src.toFloat());
}

bool	Fixed::operator<=(Fixed src) {
	return (this->toFloat() <= src.toFloat());
}

bool	Fixed::operator>(Fixed src) {
	return (this->toFloat() > src.toFloat());
}

bool	Fixed::operator>=(Fixed src) {
	return (this->toFloat() >= src.toFloat());
}

bool	Fixed::operator==(Fixed src) {
	return (this->toFloat() == src.toFloat());
}

bool	Fixed::operator!=(Fixed src) {
	return (this->toFloat() != src.toFloat());
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f) {
	os << f.toFloat();
	return os;
}

float Fixed::operator+(Fixed src) {
	return (this->toFloat() + src.toFloat());
}

float Fixed::operator-(Fixed src) {
	return (this->toFloat() - src.toFloat());
}

float Fixed::operator*(Fixed src) {
	return (this->toFloat() * src.toFloat());
}

float Fixed::operator/(Fixed src) {
	return (this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator++(int) {
	Fixed tmp = *this;
	this->fixedPointValue++;
	return (tmp);
}

Fixed	Fixed::operator++() {
	this->fixedPointValue++;
	return (*this);
}

Fixed	Fixed::operator--() {
	--this->fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp = *this;
	--this->fixedPointValue;
	return (tmp);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}

void Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (fixedPointValue / (float)(1 << bits));
}

int		Fixed::toInt(void) const {
	return (fixedPointValue >> bits);
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}
