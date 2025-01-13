/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:31:04 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 18:52:12 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();
	void attack(const std::string& target);
	void highFivesGuys(void);
	FragTrap &operator=(FragTrap const &rhs);
};

#endif