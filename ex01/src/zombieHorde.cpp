/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:21:15 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 10:07:29 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;

    zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombieHorde[i].setZombieName(name);
        zombieHorde[i].setZombieIndex(i);
    }
    return (zombieHorde);
}