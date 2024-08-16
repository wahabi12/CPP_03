/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:21:10 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 06:22:26 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

// Constructeur
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

// Destructeur
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

// Méthode d'attaque
void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target 
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name 
                  << " can't attack due to insufficient hit points or energy points!" << std::endl;
    }
}

// Méthode pour prendre des dégâts
void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount 
              << " points of damage! Remaining hit points: " << _hitPoints << std::endl;
}

// Méthode pour se réparer
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount 
                  << " hit points! Remaining hit points: " << _hitPoints 
                  << ", energy points: " << _energyPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _name 
                  << " can't repair due to insufficient energy points!" << std::endl;
    }
}
