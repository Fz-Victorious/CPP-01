/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 05:51:00 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/15 05:51:03 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        std::string getname(void) const;
        void    setname(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif
