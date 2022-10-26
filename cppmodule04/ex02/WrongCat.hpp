/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:33:30 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:33:31 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

 #include "WrongAnimal.hpp"

 class WrongCat : public WrongAnimal
 {
 public:
	WrongCat(void);
	WrongCat(WrongCat const &wc);
	virtual ~WrongCat();
	WrongCat	&operator = (WrongCat const &wc);
	void		makeSound(void) const;
};
