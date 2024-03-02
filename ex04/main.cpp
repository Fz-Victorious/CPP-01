/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 07:38:52 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/21 17:45:53 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int check_args(int ac, char **av)
{
	std::string str;
	if (ac != 4)
	{
		std::cout << "Invalid arguments!" << std::endl;
		std::cout << "<executable>  <filename>  <string_to_replace> <string_to_replace_with>" << std::endl;
		return (1);
	}
	else
	{
		for (int i = 1; i <= 3; i++)
		{
			str = av[i];
			if (str.length() == 0)
			{
				std::cout << "Empty Strings!" << std::endl;
				return (1);
			}
		}
		return (0);
	}
}

void ft_replace(std::string &line, std::string to_replace, std::string replace_with, int &pos)
{
	line.erase(pos, to_replace.length());
	line.insert(pos, replace_with);
	pos = pos + replace_with.length();
}

int main(int ac, char **av)
{
	std::ifstream inFile;
	std::ofstream outFile;
	std::string line;
	int pos = 0;

	if (check_args(ac, av))
		return (1);
	inFile.open(av[1]);
	if (inFile.fail())
	{
		std::cout << "Error in opening the file" << std::endl;
		return (1);
	}
	outFile.open(av[1] + std::string(".replace"));
	while (std::getline(inFile, line))
	{
		pos = 0;
		if (!inFile.eof())
			line.append("\n");
		while (1337)
		{
			pos = line.find(av[2], pos);
			if (pos == -1)
				break;
			ft_replace(line, av[2], av[3], pos);
		}
		outFile << line;
		if (inFile.eof())
			break;
	}
	outFile.close();
	inFile.close();
	return (0);
}
