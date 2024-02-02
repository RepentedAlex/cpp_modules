/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookUtils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitco <apetitco@sutdent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:46:35 by apetitco          #+#    #+#             */
/*   Updated: 2024/02/02 18:49:23 by apetitco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
#define PHONEBOOK_UTILS_HPP

#include <iostream>
#include "Contact.hpp"

//Returns a string with n spaces
std::string	add_spaces(int n);

//Ensures a string has at most 'max' chars, adding '.' when needed
std::string	fix_width(std::string str, long unsigned max);

//Prints existing contacts with a pretty format
int			search_ui(Contact contacts[8]);

#endif
