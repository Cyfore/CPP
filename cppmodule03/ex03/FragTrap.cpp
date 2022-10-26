/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:34:23 by eulker            #+#    #+#             */
/*   Updated: 2022/09/30 00:34:24 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap:	default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FragTrap:	name constructor has been called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << "FragTrap: copy constructor has been called" << std::endl;
	*this = f;
}

FragTrap& FragTrap::operator = (FragTrap const &b)
{
	ClapTrap::operator=(b);

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap:	destructor has been called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap:	HighFiveGuys has been called" << std::endl;
}
