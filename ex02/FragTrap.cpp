/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:31:07 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 18:52:56 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap created\n";
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	Name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap created\n";
}

void FragTrap::attack(const std::string& target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		this->energy_points -= 1;
		std::cout << "FragTrap " <<  this->Name <<  " attacks " << target << ", causing " << this->attack_damage << " points of damage!\n";
	}
	else
		std::cout << "FragTrap " << this->Name << " couldn't attack due lack of ep or hp\n";
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap delete\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request\n";
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	(void)rhs;
	return *this;
}
