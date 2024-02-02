/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:45:26 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 19:28:17 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "PhonebookUtils.hpp"

class Phonebook
{
private:
	Contact	_contacts[8];
	int		_index;
public:
	Phonebook(/* args */);
	~Phonebook();
	void	add(void);
	void	search(void);
	void	print(Contact contact);
	Contact	get_contact(int index);
};

#endif
