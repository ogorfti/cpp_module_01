/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:46:40 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/29 14:50:10 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newname)
{
	this->name = newname;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &neweapon)
{
	this->weapon = &neweapon;
}

void HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with their bare hands!" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	
}