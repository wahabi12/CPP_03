/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:22:55 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 06:24:57 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif