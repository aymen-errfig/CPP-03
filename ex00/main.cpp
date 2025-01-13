/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:18:50 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/08 16:22:04 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap1("Clappy");

    clap1.attack("Target");
    clap1.takeDamage(3);
    clap1.beRepaired(5);

    return 0;
}
