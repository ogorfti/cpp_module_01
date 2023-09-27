/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:06:10 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/27 17:23:57 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
	std::cout << this->name << std::endl;
}

void Zombie::setName(std::string newName)
{
	this->name = newName;
}

int main()
{
	Zombie *zombies;

	zombies = zombieHorde(7, "Zoglin...");
	delete[] zombies;
}
