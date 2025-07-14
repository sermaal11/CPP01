/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:25 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 09:35:48 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
    int zAmmount;
    zAmmount = std::atoi(argv[1]);
    Zombie* horde;
    
    if (argc != 3)
    {
        std::cout << RED << "Usage: ./Moar_brainz! <number_of_Zombies>" 
                << " <name_of_Zombies>"
                << RESET << std::endl;
        return 1;
    }
    if (zAmmount < 1)
    {
        std::cout << RED << " - Please enter a positive number of zombies - " << RESET << std::endl;
        return 1;
    }
    horde = zombieHorde(zAmmount, argv[2]);
    return (0);
}
