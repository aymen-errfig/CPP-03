/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:18:50 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/09 10:17:28 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "Creating a ClapTrap instance..." << std::endl;
    ClapTrap clap("Clap");
    clap.attack("!EGG");

    std::cout << "\nCreating a ScavTrap instance..." << std::endl;
    ScavTrap scav("Scavvy");
    scav.attack("Target 2");
    scav.guardGate();

    std::cout << "\nTest Destructor Chain:" << std::endl;
    {
        ScavTrap scav2("Scavvy2");
        scav2.attack("Target 3");
    }

    return 0;
}
