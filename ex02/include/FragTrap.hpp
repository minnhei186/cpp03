/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:47:42 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/15 14:14:32 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string newName);
		FragTrap(const FragTrap& origin);
		FragTrap& operator=(const FragTrap& origin);
		~FragTrap();
		void highFivesGuys(void);
};

