/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:26:14 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/29 14:37:39 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string newname, Weapon& weapon);
		void attack(void);
};

#endif