/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:32:30 by eulker            #+#    #+#             */
/*   Updated: 2022/09/30 00:31:05 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	void attack(const std::string &target);
	void guardGate(void) const;

	ScavTrap &operator=(const ScavTrap &s);

	ScavTrap(void);
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &s);
	~ScavTrap(void);
};
