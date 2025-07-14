/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:25 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 10:16:20 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
    
    if (argc != 3)
    {
        std::cout << RED << "Usage: ./Moar_brainz! <number_of_Zombies>" 
        << " <name_of_Zombies>"
        << RESET << std::endl;
        return 1;
    }
    int zAmmount;
    zAmmount = std::atoi(argv[1]);
    if (zAmmount < 1)
    {
        std::cout << RED << " - Please enter a positive number of zombies - " << RESET << std::endl;
        return 1;
    }
    Zombie* horde;
    horde = zombieHorde(zAmmount, argv[2]);
    for (int i = 0; i < zAmmount; i++)
        horde[i].announce();
    delete[] horde;
    horde = nullptr;
    return (0);
}
