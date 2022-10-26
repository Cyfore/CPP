/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:08:23 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:46:29 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->setType("Cat");
	std::cout << "Cat:		Default Constructed" << std::endl;
}

Cat::Cat(Cat const &c) : Animal(c)
{
	*this = c;
	std::cout << "Cat:		Copy Constructed" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat:		Deleted..." << std::endl;
}

Cat& Cat::operator = (Cat const &c)
{
	this->setType(c.getType());
	std::cout << "Cat:		Assigned." << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat:		Miyaaaav" << std::endl;
}
