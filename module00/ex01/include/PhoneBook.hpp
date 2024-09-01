#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int		index;
		int		count;
	public:
		PhoneBook();

		void	addContact(const Contact &newContact);
		void searchContacts() const;
		void displayContact(int index) const;
	};

#endif