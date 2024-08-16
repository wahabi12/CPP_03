/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:00:59 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 06:34:46 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

#include "FragTrap.hpp"
#include <iostream>

// Constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

// Destructeur
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

// attack function
void FragTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
                  << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << _name << " is out of energy or hit points!" << std::endl;
    }
}

// Special ability function
void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " is requesting high fives!" << std::endl;
}
