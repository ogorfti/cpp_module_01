/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:24:21 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/29 10:57:08 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string newType) { type = newType; }

std::string Weapon::getType() { return (this->type); } 

Weapon::Weapon(std::string newType)
{
    this->type = newType;
}