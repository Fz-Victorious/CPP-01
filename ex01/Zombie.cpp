/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 05:49:44 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:02:05 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " destructor called" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//setters and getters

std::string Zombie::getname(void) const
{
    return (this->_name);
}

void    Zombie::setname(std::string name)
{
    this->_name = name;
}
