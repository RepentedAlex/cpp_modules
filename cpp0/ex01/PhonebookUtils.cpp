/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:50:11 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 19:34:48 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookUtils.hpp"

std::string	add_spaces(int n)
{
	std::string	str;

	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_width(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);

}

int			search_ui(Contact contacts[8])
{
	char		c;
	int			i;
	std::string	str;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	c = '0';
	i = 0;
	while (++c <= '8')
	{
		if (contacts[c - 1 - '0'].get_firstName().size() && ++i)
		{
			str = c;
			str = fix_width(str, 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1  - '0'].get_firstName(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_lastName(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			str = fix_width(contacts[c - 1 - '0'].get_nickName(), 10);
			std::cout << "|" << add_spaces(10 - str.size()) << str;
			std::cout << "|" << std::endl;

		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
	return (i);
}
