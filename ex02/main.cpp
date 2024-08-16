/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:24:44 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/16 06:31:00 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    FragTrap frag("Fraggy");
    frag.attack("Traget A");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();
    
    return (0);
}