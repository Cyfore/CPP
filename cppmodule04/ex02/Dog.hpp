/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:32:45 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:32:48 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog(void);
	Dog(Dog const &d);
	virtual ~Dog();
	Dog		&operator = (Dog const &d);
	void	makeSound(void) const;
	Brain	*getBrain() const;
};
