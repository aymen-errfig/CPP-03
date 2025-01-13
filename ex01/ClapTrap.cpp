/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:18:47 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/09 09:59:19 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " created\n";
}

ClapTrap::ClapTrap(const std::string &name)
{
	this->Name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap " << this->Name << " created\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " destroyed\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	(void)rhs;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ClapTrap " <<  this->Name <<  " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << this->Name << " couldn't attack due lack of ep or hp\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points > 0)
		std::cout << "ClapTrap " << this->Name << " takes Damage " << amount << "\n";
	else
		std::cout << "ClapTrap " << this->Name << " already destructed\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points > 0 && energy_points > 0)
	{
		this->energy_points -= 1;
		this->hit_points += amount;
		std::cout << "ClapTrap " << this->Name << " repaired it self by " << amount << " hp\n";
	}
	else
		std::cout << "ClapTrap " << this->Name << " couldn't repair itself due lack of ep or hp\n";
}
