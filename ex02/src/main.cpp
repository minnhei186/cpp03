/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:47:53 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/15 14:20:24 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap mob1("mob1");

	mob1.attack("zombie");
	mob1.guardGate();

	FragTrap robot1("robot1");
	robot1.attack("hakase");
	robot1.highFivesGuys();
	
	return EXIT_SUCCESS;
}


