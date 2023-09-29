/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:19:48 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/29 10:32:55 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <istream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string newType);
		std::string getType(void);
		void setType(std::string newType);
};

#endif