/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:15:17 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/13 12:31:15 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName):
	name(newName),
	hitPoint(10),
	energyPoint(10),
	attackDamage(0)
{
	std::cout<<"ClapTrap defalut constractor"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& origin)
{
	*this=origin;//代入オーバーロードを呼ぶのが肝。
	std::cout<<"ClapTrap copy constractor"<<std::endl;
}

//アクセスによって一時インスタンスとなる。おもろ
ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
	if(this!=&origin)
	{
		this->name=origin.name;
		this->hitPoint=origin.hitPoint;
		this->energyPoint=origin.energyPoint;
		this->attackDamage=origin.attackDamage;
	}
	std::cout<<"ClapTrap = over load"<<std::endl;
	return *this;
}


ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap bye bye my hero"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{

	if(hitPoint>0&&energyPoint>0)
	{
		--energyPoint;

		std::cout<<"ClapTrap "<<name<<" attacks "<<target<<", ";
		std::cout<<" causing "<<attackDamage<<" points of damage! "<<std::endl;	
	}

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(hitPoint>=amount)
		hitPoint=hitPoint-amount;
	else
		hitPoint=0;

	std::cout<<"ClapTrap "<<name<<" take damage "<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned long long total;

	if(hitPoint>0&&energyPoint>0)
	{
		--energyPoint;

		total=hitPoint+amount;
		if(total>std::numeric_limits<unsigned int>::max())
			hitPoint=std::numeric_limits<unsigned int>::max();
		else
			hitPoint=hitPoint+amount;

		std::cout<<"ClapTrap "<<name<<" be rapaired"<<std::endl;
	}
}









