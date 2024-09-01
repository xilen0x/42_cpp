#include "Contact.hpp"
/*--------------------SETs--------------------*/
void	Contact::setFirstName(const std::string &firstName){
	this->firstName = firstName;
}

void	Contact::setLastName(const std::string &lastName){
	this->lastName = lastName;
}

void	Contact::setNickname(const std::string &nickName){
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string &phoneNumber){
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &darkestSecret){
	this->darkestSecret = darkestSecret;
}

/*--------------------GETs--------------------*/
std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickName;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}