/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:19:24 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 18:42:39 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    complainsPtr[0] = &Harl::debug;
    complainsPtr[1] = &Harl::info;
    complainsPtr[2] = &Harl::warning;
    complainsPtr[3] = &Harl::error;
}

Harl::~Harl()
{
    /*
    * std::cout << "Harl destructor called" << std::endl;
    */
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Harl::error(void) {
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string harlLevels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    
    for(int i = 0; i < 4; i++)
    {
        if (harlLevels[i] == level)
        {
            (this->*complainsPtr[i])();
        }
    }
}
