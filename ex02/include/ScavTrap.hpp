/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:39:31 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/17 16:42:57 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap& origin);
		ScavTrap& operator=(const ScavTrap& origin);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate();

};


