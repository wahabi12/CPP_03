/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 06:57:04 by blatifat          #+#    #+#             */
/*   Updated: 2024/08/15 23:08:01 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap robot("Clappy");
    
    robot.attack("Target A");
    robot.takeDemage(3);
    robot.beRepaired(5);;
    robot.takeDemage(10);
    robot.beRepaired(2);
    robot.attack("Target B");

    return (0);
}
