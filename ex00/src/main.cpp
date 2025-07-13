/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 13:06:34 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 01:01:56 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
    std::cout << CYAN << "== Zombien en el HEAP ==" << RESET << std::endl;
    Zombie* heapZombie;
    heapZombie = newZombie("HeapZ");
    heapZombie->announce();
	delete heapZombie;
    std::cout << CYAN << "== Zombien en el STACK ==" << RESET << std::endl;
    randomChump("StackZ");
    return (0);
}