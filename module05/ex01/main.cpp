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
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat	b1("pepito", 5);
        Bureaucrat	b3("marc", 150);
        Bureaucrat	b2("narcis", 68);

        Form		f1("Generalitat", 50, 70);
		Form		f2("institut", 10, 6);
		Form		f3("42", 78, 33);

		// b1.signForm(f1);
        b1.signForm(f2);
        b1.signForm(f3);
		// f3.beSigned(b1);
		// f1.beSigned(b1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }
}


// int	main(void)
// {
// 	try 
// 	{
// 		std::cout << std::endl;
// 		Bureaucrat buro1("buro1", 3);
// 		// Bureaucrat buro1("buro1", 45);
// 		//Bureaucrat buro1("buro1", 150);
		
// 		// ==== CREANDO FORMULARIOS ====";
// 		Form form1("form1", 3, 1);

// 		std::cout << YELLOW << "========== GRADOS DE LOS BUROCRATAS ==========" << RESET << std::endl;
// 		std::cout << buro1 << std::endl;
// 		std::cout << std::endl;

// 		std::cout << YELLOW << "================== FORMULARIOS ===============" << RESET << RESET << std::endl;
// 		std::cout << form1 << std::endl;

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
