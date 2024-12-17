/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:47:53 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/17 16:52:54 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

int main(void)
{
    std::cout << "=== Creating a ClapTrap ===" << std::endl;
    ClapTrap c1("Clappy");
    c1.attack("dummy target");
    c1.takeDamage(5);
    c1.beRepaired(3);
    std::cout << "=== ClapTrap destruction will start at the end of main ===" << std::endl;

    std::cout << "\n=== Creating a ScavTrap ===" << std::endl;
    ScavTrap s1("Scavvy");

    // ScavTrapのattack()
    s1.attack("zombie");  // ScavTrap独自のメッセージが期待される(要virtual/override対応済みなら)
    s1.takeDamage(50);
    s1.beRepaired(20);

    // ScavTrap独自の能力
    s1.guardGate();

    std::cout << "=== ScavTrap destruction will start at the end of main ===" << std::endl;

    return EXIT_SUCCESS;
}
