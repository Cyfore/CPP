/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:26 by eulker            #+#    #+#             */
/*   Updated: 2022/10/06 17:42:26 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;

public:
	virtual Animal	&operator = (const Animal &a);
	Animal(void);
	Animal(const Animal &a);
	virtual ~Animal();

	virtual void 	makeSound() const;
	virtual Brain	*getBrain() const;

	std::string 	getType() const;
	void			setType(const std::string &type);
};
