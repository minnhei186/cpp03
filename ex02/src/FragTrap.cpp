/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:52:38 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/15 14:18:22 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string newName):ClapTrap(newName)
{
	hitPoint=100;
	energyPoint=100;
	attackDamage=30;
	std::cout<<"FragTrap :"<<name<<" constractor called!"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& origin):ClapTrap(origin)
{
	*this=origin;
	std::cout<<"FragTrap :"<<name<<" copy constractor called "<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& origin)
{
	if(this!=&origin)
	{
		ClapTrap::operator=(origin);
	}
	std::cout<<"FragTrap :"<<name<<" = operator called "<<std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout<<"FragTrap :"<<name<<" deconstractor called!"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{

	std::cout<<"FragTrap :"<<name<<"yooooo!!! stand up!!!"<<std::endl;
}



