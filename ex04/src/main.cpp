/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:38:22 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 22:44:00 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RED "\033[31m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

int main(int argc, char** argv)
{
    (void) argv;
    if (argc != 4)
    {
        std::cout << RED << "Usage: ./Sed_is_for_losers <filename>" 
        << " <std::string s1>"
        << " <std::string s2>"
        << RESET << std::endl;
        return 1;
    }
    else
    {
        std::cout << GREEN << "Continuacion del codigo" << RESET << std::endl;
    }
    return (0);
}


