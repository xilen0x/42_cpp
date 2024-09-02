/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:45:01 by castorga          #+#    #+#             */
/*   Updated: 2024/08/28 17:45:04 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	private:
		Contact		contactArray[8];
		int			count;
		
	public:
		PhoneBook();
		~PhoneBook();

		void	addContact();
		void	searchContact();
		// void	exitProgram();
		void	printContactList();
		void	printContactList(std::string index);
};

#endif
