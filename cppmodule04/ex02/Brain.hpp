/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:32:11 by eulker            #+#    #+#             */
/*   Updated: 2022/10/03 14:32:12 by eulker           ###   ########.fr       */
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
