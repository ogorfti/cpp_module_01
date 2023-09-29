/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:45:24 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/29 14:38:00 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string newname);
		void setWeapon(Weapon &neweapon);
		void attack(void);
};

#endif