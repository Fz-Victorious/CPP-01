/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:14:26 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:36:37 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    /*
     *   std::cout << "Weapon constructor called" << std::endl;
     */
}

Weapon::~Weapon()
{
    /*
     *   std::cout << "Weapon destructor called" << std::endl;
     */

}

const std::string &Weapon::getType(void)
{
    return this->_type;
}

void           Weapon::setType(std::string type)
{
    this->_type = type;
}
