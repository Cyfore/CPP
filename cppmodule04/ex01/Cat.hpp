/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:28:00 by eulker            #+#    #+#             */
/*   Updated: 2022/10/06 17:42:31 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat(void);
	Cat(Cat const &c);
	virtual ~Cat();
	Cat		&operator = (Cat const &c);
	void	makeSound(void) const;
	Brain	*getBrain() const;
};
