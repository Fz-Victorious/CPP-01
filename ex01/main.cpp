/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 05:49:16 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:03:48 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int nbr = 20;
    std::string nameZombie = "FOO";
    Zombie *zom;

    zom = zombieHorde(nbr, nameZombie);
	delete [] zom;
    return (0);
}
