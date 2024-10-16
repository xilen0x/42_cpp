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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm   scf1;
        RobotomyRequestForm     rrf1;
        PresidentialPardonForm  ppf1;

        Bureaucrat              b3("marc", 110);

        ppf1.executeForm();
        std::cout << std::endl;
        rrf1.executeForm();
        std::cout << std::endl;
        scf1.executeForm();
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        ShrubberyCreationForm   scf1;
        RobotomyRequestForm     rrf1;
        PresidentialPardonForm  ppf1;

        Bureaucrat              b3("marc", 2);

        scf1.beSigned(b3);
        rrf1.beSigned(b3);
        ppf1.beSigned(b3);

        scf1.execute(b3);
        std::cout << std::endl;
        rrf1.execute(b3);
        std::cout << std::endl;
        ppf1.execute(b3);
        std::cout << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


// int	main()
// {
// 		std::cout << std::endl;
// 		std::cout << "==================================" << std::endl;
// 		Bureaucrat buro1("buro1", 3);
// 		// Bureaucrat buro1("buro1", 45);
// 		// Bureaucrat buro1("buro1", 150);
		
// 		// ==== CREANDO FORMULARIOS ====";
// 		Form form1("form1", 3, 1);

// 		std::cout << YELLOW << "========== GRADOS DE LOS BUROCRATAS ==========" << RESET << std::endl;
// 		std::cout << buro1 << std::endl;
// 		std::cout << std::endl;

// 		std::cout << YELLOW << "================== FORMULARIOS ===============" << RESET << RESET << std::endl;
// 		std::cout << form1 << std::endl;

// 	try 
// 	{
// 		std::cout << YELLOW << "============= FIRMANDO FORMULARIOS ===========" << RESET << std::endl;
// 		buro1.signForm(form1);
// 		std::cout << std::endl;

// 		std::cout << YELLOW << "============ FORMULARIOS ACTUALIZADOS ========" << RESET << std::endl;
// 		std::cout << form1 << std::endl;

// 		std::cout << YELLOW << "==== INCREMENTANDO EL GRADO DEL BUROCRATA ====" << RESET << std::endl;
// 		buro1.incrementGrade();
// 		std::cout << std::endl;

// 		// std::cout << YELLOW << "==== DECREMENTANDO EL GRADO DEL BUROCRATA ====" << RESET << std::endl;
// 		// buro1.decrementGrade();
// 		// std::cout << std::endl;

// 		std::cout << YELLOW << "==== GRADOS DE LOS BUROCRATAS ACTUALIZADOS ====" << RESET << std::endl;
// 		std::cout << buro1 << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	return (0);
// }
