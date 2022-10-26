/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulker <eulker@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 00:34:34 by eulker            #+#    #+#             */
/*   Updated: 2022/09/30 00:34:35 by eulker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	DiamondTrapB("Emirhan");

	std::cout << std::endl;

	std::cout << DiamondTrapB << std::endl;

	DiamondTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << DiamondTrapB << std::endl;

	DiamondTrapB.highFivesGuys();
	DiamondTrapB.guardGate();
	DiamondTrapB.whoAmI();
	std::cout << std::endl;



	return(0);
}
