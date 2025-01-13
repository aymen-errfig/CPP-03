/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:31:04 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 18:31:04 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
	ScavTrap &operator=(ScavTrap const &rhs);
};

#endif