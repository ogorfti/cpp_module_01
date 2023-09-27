/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:01:33 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/27 15:58:00 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("FOO");
	Zombie *heapZombie = newZombie("FOO*");
	heapZombie->announce();
	delete heapZombie;
}