/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:06:34 by sergio            #+#    #+#             */
/*   Updated: 2025/07/12 18:31:55 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    std::cout << GREEN << "== Zombien en el HEAP ==" << RESET << std::endl;
    Zombie* heapZombie = newZombie("Rick");
    heapZombie -> announce();
    delete heapZombie;  //Liberamos la memoria manualmente
    std::cout << GREEN << "== Zombien en el STACK ==" << RESET << std::endl;
    randomChump("Morty");
    return (0);
}