/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:25:56 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/30 18:45:25 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string	name;
	std::string	s1;
	std::string	s2;

	if (ac == 4)
	{
		s2 = av[3];
		s1 = av[2];
		name = av[1];
		std::fstream sourceFile(name);
		std::ofstream destFile(name + ".replace");
		if (sourceFile.is_open() && destFile.is_open() && s1.size() && s2.size())
		{
			std::string line;
			while (std::getline(sourceFile, line, '\0'))
			{
				size_t pos = 0;
				while ((pos = line.find(s1, pos)) != std::string::npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos += s2.length();
				}
				destFile << line;
			}
			destFile.close();
			sourceFile.close();
		}
		else
			std::cerr << "Error" << std::endl;
	}
}
