/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:08:12 by eulker            #+#    #+#             */
/*   Updated: 2022/10/05 16:36:54 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	virtual Animal	&operator = (const Animal &a);
	Animal(void);
	Animal(const Animal &a);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
	void		setType(const std::string &type);
};