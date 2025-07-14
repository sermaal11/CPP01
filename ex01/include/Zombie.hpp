/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 01:10:41 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 10:04:30 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// COLOR MSG //
# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

// HEADERS //
# include <iostream>
# include <cstdlib>

class Zombie
{
    private:
        std::string _name;
        int _index;
    public:
        Zombie();
        Zombie(std::string zName);
        ~Zombie();
        void setZombieName(std::string zName);
        void setZombieIndex(int index);
        void announce();
        
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
