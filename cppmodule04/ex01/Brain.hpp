/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:27:47 by eulker            #+#    #+#             */
/*   Updated: 2022/10/06 17:15:22 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#define N_IDEAS 100
class Brain
{
private:

public:
	Brain();
	Brain(Brain const & b);
	virtual ~Brain();
	Brain 		&operator=(Brain const & b);
	std::string	ideas[N_IDEAS];
};
