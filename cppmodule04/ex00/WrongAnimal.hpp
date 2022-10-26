/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:31 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 15:18:22 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	virtual WrongAnimal	&operator = (const WrongAnimal &a);
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &a);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
	void		setType(const std::string &type);
};
