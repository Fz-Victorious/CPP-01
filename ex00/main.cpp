/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 02:44:47 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 16:54:51 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    {
        std::cout << "test 1: testing the Zombie class" << std::endl;
        Zombie  z = Zombie("zombie");

        z.announce();
    }
    {
		std::cout << std::endl;
        std::cout << "test 2: testing newZombie Function" << std::endl;
        Zombie* newZ;

        newZ = newZombie("new zombie");
        newZ->announce();
        delete newZ;
    }
    {
		std::cout << std::endl;
        std::cout << "test 3: testing randomChump function" << std::endl;
        randomChump( "random zombie" );
    }
    {
		std::cout << std::endl;
        std::cout << "test 4: testing the two functions" << std::endl;
        Zombie  z = Zombie( "zombie2" );
        Zombie* newZ;

        newZ = newZombie( "new zombie2" );
        newZ->announce();
        delete newZ;
		randomChump( "random zombie2" );
		
    }
}
