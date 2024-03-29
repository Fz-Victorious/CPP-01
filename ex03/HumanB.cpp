/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:14:05 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:37:16 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name =name;
    _weapon = nullptr;
    /*
     *   std::cout << "HumanB constructor called" << std::endl;
     */
}

HumanB::~HumanB()
{
    /*
     *   std::cout << "HumanB constructor called" << std::endl;
     */
}

void HumanB::attack(void)
{
    if (_weapon != nullptr)
        std::cout << this->_name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
