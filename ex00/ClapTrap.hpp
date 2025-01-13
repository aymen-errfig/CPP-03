/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:18:43 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 16:21:42 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string Name;
	unsigned int hit_points;
	unsigned int energy_points;
	unsigned int attack_damage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &rhs);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif