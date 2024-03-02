/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 05:50:09 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:02:59 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if ( N <= 0) {
        std::cout << "\"" << N << "\": Invalid argument";
        return ( NULL );
    }

    Zombie * zom;

    zom = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zom[i].setname(name);
        zom[i].announce();
    }
    return (zom);
}
