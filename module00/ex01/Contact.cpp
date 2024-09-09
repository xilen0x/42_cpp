/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:45:27 by castorga          #+#    #+#             */
/*   Updated: 2024/08/28 17:45:29 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*-------------------------------- setters --------------------------------*/
void	Contact::setFirstName(std::string firstName)
{

	x
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

/*-------------------------------- getters --------------------------------*/
std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickName()
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

/*-------------------------------- constructors --------------------------------*/
Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

/*-------------------------------- destructor --------------------------------*/
Contact::~Contact(){}

