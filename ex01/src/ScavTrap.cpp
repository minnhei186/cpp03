/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:41:58 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/17 16:43:32 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName):ClapTrap(newName)
{
	hitPoint=100;
	energyPoint=50;
	attackDamage=20;

	std::cout<<"ScavTrap :"<<name<<" constractor called!"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& origin):ClapTrap(origin)
{
	*this=origin;
	std::cout<<"ScavTrap :"<<name<<" copy constractor called "<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
{
	if(this!=&origin)
	{
		ClapTrap::operator=(origin);
	}
	std::cout<<"ScavTrap :"<<name<<" = operator called "<<std::endl;
	return *this;
}


ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap :"<<name<<" deconstractor called!"<<std::endl;
}


void ScavTrap::attack(const std::string &target)
{
    if (hitPoint > 0 && energyPoint > 0)
    {
        --energyPoint;
        std::cout << "ScavTrap " << name << " ferociously attacks " << target << ", ";
        std::cout << "causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << name << " cannot attack " << target
                  << " due to insufficient hit points or energy points." << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
	std::cout<<"ScavTrap :"<<name<<"Gate keeper mode"<<std::endl;
}





