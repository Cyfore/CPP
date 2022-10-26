/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:08:48 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:08:52 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->setType("Dog");
	std::cout << "Dog:		Default Constructed" << std::endl;
}

Dog::Dog(Dog const &d) : Animal(d)
{
	*this = d;
	std::cout << "Dog:		Copy Constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog:		Deleted..." << std::endl;
}

Dog& Dog::operator = (Dog const &d)
{
	this->setType(d.getType());
	std::cout << "Dog:		Assigned." << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog:		HAV HAV" << std::endl;
}
