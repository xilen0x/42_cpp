/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aFormUtils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:53:00 by castorga          #+#    #+#             */
/*   Updated: 2024/10/17 10:53:02 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ctime>

void RobotomyRequestForm::executeForm(void) const
{
	std::srand(std::time(0));
    int randomValue = std::rand();
    bool	fiftyPercentChance = (randomValue % 2) == 0;

	if (fiftyPercentChance)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy from " << _target << " failed" << std::endl;
}

// void RobotomyRequestForm::cannotExecute(void) const
// {
// 	std::cout << "Form " << getName() << " cannot be executed" << std::endl;
// }