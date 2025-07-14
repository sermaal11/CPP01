/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:31 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 08:03:31 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << ": " << RED << "Has been destroyed" << RESET << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": " << GREEN << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

