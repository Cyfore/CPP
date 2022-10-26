/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:34 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:27:35 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain:		Default Constructed" << std::endl;
}

Brain::Brain(Brain const & b)
{
	std::cout << "Brain:		Copy Constructed" << std::endl;
	*this = b;
}

Brain::~Brain()
{
	std::cout << "Brain:		Deleted..." << std::endl;
}

Brain& Brain::operator=(Brain const &b)
{
	std::cout << "Brain:		Assigned." << std::endl;
	for (unsigned i = 0; i < 100; ++i)
		this->ideas[i] = b.ideas[i];
	return (*this);
}
