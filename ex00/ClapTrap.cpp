/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 06:58:07 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/15 23:20:29 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoint(10), _attackDamage(0){
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap " << _name << " has been copied!" << std::endl;
}

// Opérateur d'affectation
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoint = other._energyPoint;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

// Destructeur
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
}

// Fonction d'attaque
void ClapTrap::attack(const std::string& target) {
    if (_energyPoint > 0 && _hitPoints > 0) {
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attacks " << target 
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to attack!" << std::endl;
    }
}

// Fonction pour subir des dégâts
void ClapTrap::takeDemage(unsigned int amount) {
    if (_hitPoints > 0) {
        _hitPoints -= amount;
        if (_hitPoints < 0) _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " points of damage! Remaining hit points: " << _hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " is already out of hit points!" << std::endl;
    }
}

// Fonction de réparation
void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoint > 0 && _hitPoints > 0) {
        _hitPoints += amount;
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount 
                  << " hit points! Remaining hit points: " << _hitPoints 
                  << ", energy points: " << _energyPoint << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to repair!" << std::endl;
    }
}