/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:04:53 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 19:27:04 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "PhonebookUtils.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "Welcome to Your Ultimate Phonebook !" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "See ya !" << std::endl;
}

void	Phonebook::add(void)
{
	std::string	str;

	str = "";
	if (this->_index > 7)
		std::cout << "WARNING: Overwriting info about " << this->_contacts[this->_index % 8].get_firstName() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_firstName(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_index % 8].get_firstName() << "'s last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_lastName(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_index % 8].get_firstName() << "'s nickname: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_nickName(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_index % 8].get_firstName() << "'s phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_phoneNumber(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->_contacts[this->_index % 8].get_firstName() << "'s darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->_contacts[this->_index % 8].set_darkestSecret(str);
			std::cout << this->_contacts[this->_index % 8].get_firstName() << \
				" successfully added to phonebook [" << this->_index % 8 + 1 << "/8]" << std::endl;
		}
	}
	this->_index++;
}

void	Phonebook::print(Contact contact)
{
	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.get_firstName().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.get_firstName() << std::endl;
	std::cout << "Last Name: " << contact.get_lastName() << std::endl;
	std::cout << "Nickname: " << contact.get_nickName() << std::endl;
	std::cout << "Phone Number: " << contact.get_phoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkertSecret() << std::endl;

}

Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index % 8]);
}

void	Phonebook::search(void)
{
	std::string	str;

	if (!search_ui(this->_contacts))
	{
		std::cout << std::endl << "Phonebook is empty !" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (std::getline(std::cin, str) && str != "")
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->_contacts[str[0] - 1 - '0'].get_firstName().size())
				break ;
		}
		if (str != "")
			std::cout << "Invalid index !" << std::endl;
	}
	if (!std::cin.eof())
		this->print(this->_contacts[str[0] - 1 - '0']);
}
