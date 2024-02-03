/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:25:54 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/03 14:35:25 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->_name << " destroyed" << std::endl;
}
void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
