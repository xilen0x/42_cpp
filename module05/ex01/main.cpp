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

// int main()
// {
//     try {
//         Bureaucrat	b1("pepito", 5);
//         Bureaucrat	b3("marc", 150);
//         Bureaucrat	b2("narcis", 68);

//         Form		f1("Generalitat", 50, 70);
// 		Form		f2("institut", 10, 6);
// 		Form		f3("42", 78, 33);

// 		// b1.signForm(f1);
//         b1.signForm(f2);
//         b1.signForm(f3);
// 		// f3.beSigned(b1);
// 		// f1.beSigned(b1);
// 		std::cout << f1 << std::endl;
// 		std::cout << f2 << std::endl;
// 		std::cout << f3 << std::endl;
//     } catch (std::exception &e) {
//         std::cerr << "Caught an exception: " << e.what() << std::endl;
//     }
// }


int	main()
{
	std::cout << std::endl;
	std::cout << "==================================" << std::endl;
	Bureaucrat buro1("buro1", 1);
	// Bureaucrat buro2("buro2", 150);
	// Bureaucrat buro3("buro3", 75);
	
	// std::cout << "==== CREANDO FORMULARIOS ====" << std::endl;
	Form form1("form1", 1, 1);
	// Form form2("form2", 150, 150);
	// Form form3("form3", 75, 75);

	std::cout << YELLOW << "==== GRADOS DE LOS BUROCRATAS ====" << RESET << std::endl;
	std::cout << buro1 << std::endl;
	// std::cout << buro2 << std::endl;
	// std::cout << buro3 << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "==== FORMULARIOS ====" << RESET << RESET << std::endl;
	std::cout << form1 << std::endl;
	// std::cout << form2 << std::endl;
	// std::cout << form3 << std::endl;

	std::cout << YELLOW << "==== FIRMANDO FORMULARIOS ====" << RESET << std::endl;
	buro1.signForm(form1);
	// buro2.signForm(form2);
	// buro3.signForm(form3);
	std::cout << std::endl;

	std::cout << YELLOW << "==== FORMULARIOS ACTUALIZADOS ====" << RESET << std::endl;
	std::cout << form1 << std::endl;
	// std::cout << form2 << std::endl;
	// std::cout << form3 << std::endl;

	std::cout << YELLOW << "==== INCREMENTANDO Y DECREMENTANDO GRADOS ====" << RESET << std::endl;
	buro1.incrementGrade();
	// buro2.decrementGrade();
	std::cout << std::endl;

	std::cout << YELLOW << "==== GRADOS DE LOS BUROCRATAS ACTUALIZADOS ====" << RESET << std::endl;
	std::cout << buro1 << std::endl;
	// std::cout << buro2 << std::endl;
	// std::cout << buro3 << std::endl;

	return (0);
}

// #include <iostream>
// #include <string>
// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main()
// {
// 	// Creo 3 burocratas
// 	Bureaucrat buro1("buro1", 1);
// 	Bureaucrat buro2("buro2", 150);
// 	Bureaucrat buro3("buro3", 75);

// 	// Creo 3 formularios
// 	Form form1("form1", 1, 1);
// 	Form form2("form2", 150, 150);
// 	Form form3("form3", 75, 75);

// 	// Imprimo los formularios sin firmar (estado inicial)
// 	std::cout << "==== ESTADO INICIAL DE LOS FORMULARIOS ====\n";
// 	std::cout << form1 << std::endl;
// 	std::cout << form2 << std::endl;
// 	std::cout << form3 << std::endl;

// 	// Pregunto al usuario si quiere firmar un documento
// 	int opcion;
// 	std::string buroNombre;
// 	// bool firmado = false;

// 	std::cout << "\nDeseas firmar un formulario? (1 = Si, 0 = No): ";
// 	std::cin >> opcion;

// 	while (opcion == 1) {
// 		std::cout << "¿Cuál formulario deseas firmar? (1, 2, 3): ";
// 		std::cin >> opcion;

// 		switch (opcion) {
// 			case 1:
// 				std::cout << "¿Quién firmará el formulario 'form1'? (buro1, buro2, buro3): ";
// 				std::cin >> buroNombre;
// 				if (buroNombre == "buro1") buro1.signForm(form1);
// 				else if (buroNombre == "buro2") buro2.signForm(form1);
// 				else if (buroNombre == "buro3") buro3.signForm(form1);
// 				else std::cout << "Nombre incorrecto\n";
// 				break;
// 			case 2:
// 				std::cout << "¿Quién firmará el formulario 'form2'? (buro1, buro2, buro3): ";
// 				std::cin >> buroNombre;
// 				if (buroNombre == "buro1") buro1.signForm(form2);
// 				else if (buroNombre == "buro2") buro2.signForm(form2);
// 				else if (buroNombre == "buro3") buro3.signForm(form2);
// 				else std::cout << "Nombre incorrecto\n";
// 				break;
// 			case 3:
// 				std::cout << "¿Quién firmará el formulario 'form3'? (buro1, buro2, buro3): ";
// 				std::cin >> buroNombre;
// 				if (buroNombre == "buro1") buro1.signForm(form3);
// 				else if (buroNombre == "buro2") buro2.signForm(form3);
// 				else if (buroNombre == "buro3") buro3.signForm(form3);
// 				else std::cout << "Nombre incorrecto\n";
// 				break;
// 			default:
// 				std::cout << "Opción inválida. Escoge 1, 2 o 3.\n";
// 				break;
// 		}

// 		std::cout << "\nDeseas firmar otro formulario? (1 = Si, 0 = No): ";
// 		std::cin >> opcion;
// 	}

// 	// Imprimo los formularios con el estado actual (firmados o no firmados)
// 	std::cout << "\n==== ESTADO ACTUAL DE LOS FORMULARIOS ====\n";
// 	std::cout << form1 << std::endl;
// 	std::cout << form2 << std::endl;
// 	std::cout << form3 << std::endl;

// 	// Incremento y decremento los grados de los burocratas como ejemplo
// 	buro1.incrementGrade();
// 	buro2.decrementGrade();

// 	// Imprimo los burocratas
// 	std::cout << "\n==== ESTADO ACTUAL DE LOS BUROCRATAS ====\n";
// 	std::cout << buro1 << std::endl;
// 	std::cout << buro2 << std::endl;
// 	std::cout << buro3 << std::endl;

// 	return 0;
// }
