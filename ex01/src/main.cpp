/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:25 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 07:50:02 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.h"


#define RED "\033[31m"
#define RESET "\033[0m"

int main(int argc, char **argv)
{
    int count;
    count = std::atoi(argv[1]);
    
    if (argc != 2)
    {
        std::cout << RED << "Usage: ./Moar_brainz! <number_of_zombies>" << RESET << std::endl;
        return 1;
    }
    if (count <= 0)
    {
        std::cout << RED << " - Please enter a positive number - " << RESET << std::endl;
        return 1;
    }
    std::cout << "Continuar lógica con " << count << " zombies." << std::endl;
    return 0;
}

