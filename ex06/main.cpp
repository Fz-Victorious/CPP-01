/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:19:13 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 18:56:44 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum str_ind
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

int log_ind(std::string level)
{
	if (level == "DEBUG")
		return DEBUG;
	else if (level == "INFO")
		return INFO;
	else if (level == "WARNING")
		return WARNING;
	else if (level == "ERROR")
		return ERROR;
	else
		return 5;
}

int main(int ac, char **av)
{
	Harl ob;

	if (ac != 2)
	{
		std::cout << "missing args or multiple args" << std::endl; 
		return (1);
	}
	switch (log_ind(av[1]))
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			ob.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			ob.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			ob.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			ob.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return (0);
}
