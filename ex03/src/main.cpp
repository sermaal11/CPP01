/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:34 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 14:04:34 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

int main() 
{ 
    {
        Weapon club = Weapon("crude spiked club"); 
        //HumanA bob("Bob", club); 
        //bob.attack(); 
        club.setType("some other type of club"); 
        //bob.attack(); 
    } 
    {
        Weapon club = Weapon("crude spiked club"); 
        //HumanB jim("Jim"); 
        //jim.setWeapon(club); 
        //jim.attack(); 
        club.setType("some other type of club"); 
        //jim.attack(); 
    } 
    return 0;
}
