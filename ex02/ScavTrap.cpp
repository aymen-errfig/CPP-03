/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:31:07 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 18:31:08 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Scrav created\n";
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	Name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << "Scrav created\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "ScavTrap " <<  this->Name <<  " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
	}
	else
		std::cout << "ScavTrap " << this->Name << " couldn't attack due lack of ep or hp\n";
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scrav delete\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	(void)rhs;
	return *this;
}
