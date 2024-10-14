/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:15:53 by castorga          #+#    #+#             */
/*   Updated: 2024/09/24 11:15:54 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
	{
        Bureaucrat b1("castorga", 5);
        b1.incrementGrade();
		std::cout << "Bureaucrat" << std::endl << "Name: " << b1.getName() << std::endl << "Grade: " << b1.getGrade() << std::endl;
		std::cout << std::endl;
		b1.incrementGrade();
		std::cout << "Bureaucrat" << std::endl << "Name: " << b1.getName() << std::endl << "Grade: " << b1.getGrade() << std::endl;
		std::cout << std::endl;
		b1.incrementGrade();
		std::cout << "Bureaucrat" << std::endl << "Name: " << b1.getName() << std::endl << "Grade: " << b1.getGrade() << std::endl;
		std::cout << std::endl;
		b1.incrementGrade();
		std::cout << "Bureaucrat" << std::endl << "Name: " << b1.getName() << std::endl << "Grade: " << b1.getGrade() << std::endl;
		//b1.incrementGrade();
    } 
	catch (std::exception &e)
	{
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
}
