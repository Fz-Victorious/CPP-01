/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:13:45 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:28:51 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
    this->_name = name;
    /*
     *   std::cout << "HumanA constructor called" << std::endl;
     */
}

HumanA::~HumanA()
{
    /*
     *   std::cout << "HumanA destructor called" << std::endl;
     */
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
