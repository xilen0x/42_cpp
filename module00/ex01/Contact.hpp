/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:45:20 by castorga          #+#    #+#             */
/*   Updated: 2024/08/28 17:45:22 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:x
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	
	public:
		Contact();
		~Contact();
	
		void 		setFirstName(std::string firstName);
		void 		setLastName(std::string lastName);
		void 		setNickName(std::string nickName);
		void 		setPhoneNumber(std::string phoneNumber);
		void 		setDarkestSecret(std::string darkestSecret);

		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

};


#endif