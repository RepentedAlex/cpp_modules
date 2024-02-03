/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:05:58 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/03 14:18:16 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon(void);
		const std::string&	getType(void);
		void				setType(std::string type);
};

#endif
