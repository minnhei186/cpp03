/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:47:53 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/15 15:16:16 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap hero("hosokawa");

	hero.attack("zombie");

	// Test: Taking damage and repair
	hero.takeDamage(5);
	hero.beRepaired(3);
	hero.takeDamage(10);
	hero.beRepaired(20);

	// Test: Edge cases
	hero.takeDamage(100);
	hero.attack("ghost");
	hero.beRepaired(10);

	return (EXIT_SUCCESS);
}
