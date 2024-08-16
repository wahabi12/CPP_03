/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:24:33 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 06:30:48 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    // Création d'un ClapTrap
    ClapTrap clappy("Clappy");
    clappy.attack("Target A");
    clappy.takeDamage(3);
    clappy.beRepaired(5);
    clappy.takeDamage(10);
    clappy.beRepaired(2);
    clappy.attack("Target B");

    // Création d'un ScavTrap
    ScavTrap scavy("Scavy");
    scavy.attack("Target C");
    scavy.guardGate();

    return 0;
}
