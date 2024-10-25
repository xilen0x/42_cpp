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

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	int opcionForm;
	int opcionRol;
    
	// Preguntar al usuario su rol
    std::string nombre;
    int nivel;

	std::cout << "Bienvenido. Identifíquese:\n";
	std::cout << "1. Presidente (nivel 5)\n";
	std::cout << "2. Director de TV (nivel 50)\n";
	std::cout << "3. Operario (nivel 140)\n";
	std::cout << "Escriba su selección (1-3): ";
	std::cin >> opcionRol;

	switch (opcionRol) {
		case 1:
			nombre = "Presidente";
			nivel = 5;
			break;
		case 2:
			nombre = "DirectorTV";
			nivel = 50;
			break;
		case 3:
			nombre = "Operario";
			nivel = 140;
			break;
		default:
			std::cerr << "Opción inválida." << std::endl;
			return 1;
	}

	// Crear un burócrata con el rol elegido
	Bureaucrat usuario(nombre, nivel);
	Intern someRandomIntern;
	AForm *form = NULL;

	std::cout << "\nSeleccione el formulario que desea crear, firmar y ejecutar:\n";
	std::cout << "1. Presidential Pardon Form (Indultar criminal)\n";
	std::cout << "2. Robotomy Request Form (Operar robot)\n";
	std::cout << "3. Shrubbery Creation Form (Plantar arbustos)\n";
	std::cout << ": ";
	std::cin >> opcionForm;

	try {
		switch (opcionForm) {
			case 1:
				std::cout << "\nIntern is creating PresidentialPardonForm:" << std::endl;
				form = someRandomIntern.makeForm("presidential pardon", "Criminal");
				break;
			case 2:
				std::cout << "\nIntern is creating RobotomyRequestForm:" << std::endl;
				form = someRandomIntern.makeForm("robotomy request", "Robot");
				break;
			case 3:
				std::cout << "\nIntern is creating ShrubberyCreationForm:" << std::endl;
				form = someRandomIntern.makeForm("shrubbery creation", "Casa");
				break;
			default:
				std::cerr << "Opción inválida." << std::endl;
				return 1;
		}

		// Si se crea correctamente, firmar y ejecutar el formulario
		usuario.signForm(*form);
		usuario.executeForm(*form);

		// Liberar memoria del formulario creado
		delete form;
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
		if (form) {
			delete form;
		}
	}
    return 0;
}

