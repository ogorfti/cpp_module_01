/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:37:03 by ogorfti           #+#    #+#             */
/*   Updated: 2023/09/30 10:33:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) { std::cout << "DEBUG" << std::endl; }

void Harl::info( void ) { std::cout << "INFO" << std::endl; }

void Harl::warning( void ) { std::cout << "WARNING" << std::endl; }

void Harl::error( void ) { std::cout << "ERROR" << std::endl; }