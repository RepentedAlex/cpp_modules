/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:34:19 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 18:43:46 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_firstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::get_lastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::get_nickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::get_phoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::get_darkertSecret(void) const
{
	return (this->_darkestSecret);
}

void		Contact::set_firstName(std::string str)
{
	this->_firstName = str;
}

void		Contact::set_lastName(std::string str)
{
	this->_lastName = str;
}

void		Contact::set_nickName(std::string str)
{
	this->_nickName = str;
}

void		Contact::set_phoneNumber(std::string str)
{
	this->_phoneNumber = str;
}

void		Contact::set_darkestSecret(std::string str)
{
	this->_darkestSecret = str;
}
