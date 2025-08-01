/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:35:29 by sergio            #+#    #+#             */
/*   Updated: 2025/07/16 13:36:23 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void Harl::debug(void)
{
    std::cout << GREEN << "[ DEBUG ]" << RESET 
            << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
            << std::endl;
}
void Harl::info(void)
{
    std::cout << CYAN << "[ INFO ]" << RESET 
            << " I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
            << std::endl;
}
void Harl::warning(void)
{
    std::cout << RED << "[ WARNING ]" << RESET 
            << " I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
            << std::endl;
}
void Harl::error(void)
{
    std::cout << MAGENTA << "[ ERROR ]" << RESET 
            << " This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level)
{
    typedef void(Harl::*t_privateMethod)();
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    t_privateMethod actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*actions[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
