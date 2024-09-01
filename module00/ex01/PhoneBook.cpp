#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : index(0), count(0) {}

void PhoneBook::addContact(const Contact &newContact)
{
    contacts[index] = newContact;
    index = (index + 1) % 8;
    if (count < 8)
        count++;
}

void PhoneBook::searchContacts() const {
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|";
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickname = contacts[i].getNickname();

        // Recortamos los nombres si es necesario
        if (firstName.length() > 10) {
            firstName = firstName.substr(0, 9) + ".";
        }
        if (lastName.length() > 10) {
            lastName = lastName.substr(0, 9) + ".";
        }
        if (nickname.length() > 10) {
            nickname = nickname.substr(0, 9) + ".";
        }

        std::cout << std::setw(10) << firstName << "|";
        std::cout << std::setw(10) << lastName << "|";
        std::cout << std::setw(10) << nickname << std::endl;
    }
}

void PhoneBook::displayContact(int idx) const {
    if (idx < 0 || idx >= count) {
        std::cout << "Index out of range!" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[idx].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[idx].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[idx].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[idx].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[idx].getDarkestSecret() << std::endl;
}