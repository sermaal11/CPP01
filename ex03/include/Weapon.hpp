/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:52:11 by sergio            #+#    #+#             */
/*   Updated: 2025/07/14 14:33:37 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# define RED "\033[31m"
# define CYAN "\033[36m"
# define MAGENTA "\033[35m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    void setType(std::string newType);
    const std::string& getType() const;
};

#endif // WEAPON_HPP
