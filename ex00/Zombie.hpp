/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:15:47 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/27 15:49:14 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	private:
		std::string name;
	public:
		Zombie( std::string newName );
		void announce(void);
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump( std::string name );

#endif