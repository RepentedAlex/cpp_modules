/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:34:25 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 18:34:28 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	Contact(/* args */);
	~Contact();
	std::string	get_firstName(void) const;
	std::string	get_lastName(void) const;
	std::string	get_nickName(void) const;
	std::string	get_phoneNumber(void) const;
	std::string	get_darkertSecret(void) const;
	void		set_firstName(std::string str);
	void		set_lastName(std::string str);
	void		set_nickName(std::string str);
	void		set_phoneNumber(std::string str);
	void		set_darkestSecret(std::string str);
};

#endif
