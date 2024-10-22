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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	int opcionForm;
	int opcionRol;
    
	// Preguntar al usuario su rol
    std::string	nombre;
    int			nivel;

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
			std::cerr << RED << "Opción inválida." << RESET << std::endl;
			return 1;
	}
	// Crear un burócrata con el rol elegido
	Bureaucrat usuario(nombre, nivel);

	// Crear los formularios disponibles
	ShrubberyCreationForm formCreacionArbustos("Casa");
	RobotomyRequestForm formRobotomy("Robot");
	PresidentialPardonForm formIndulto("Criminal");

	std::cout << "\nSeleccione el formulario que desea firmar y ejecutar:\n";
	std::cout << "1. Presidential Pardon Form (Indultar criminal)\n";
	std::cout << "2. Robotomy Request Form (Operar robot)\n";
	std::cout << "3. Shrubbery Creation Form (Plantar arbustos)\n";
	std::cout << ": ";
	std::cin >> opcionForm;
	try {
		switch (opcionForm) {
			case 1:
				std::cout << YELLOW << "\n PresidentialPardonForm:" << RESET << std::endl;
				usuario.signForm(formIndulto);
				usuario.executeForm(formIndulto);
				break;
			case 2:
				std::cout << YELLOW << "\n RobotomyRequestForm:" << RESET << std::endl;
				usuario.signForm(formRobotomy);
				usuario.executeForm(formRobotomy);
				break;
			case 3:
				std::cout << YELLOW << "\n ShrubberyCreationForm:" << RESET << std::endl;
				usuario.signForm(formCreacionArbustos);
				usuario.executeForm(formCreacionArbustos);
				break;
			default:
				std::cerr << RED << "Opción inválida." << RESET << std::endl;
				return 1;
		}
	} catch (const std::exception &e) {
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
    return 0;
}

// int main()
// {
//         // Crear Burócratas con diferentes niveles
//         Bureaucrat burocrata1("Carlos", 50);
//         Bureaucrat burocrata2("Rodrigo", 140);
//         Bureaucrat burocrata3("Julian", 5);

//         // Crear Formularios con targets específicos
//         ShrubberyCreationForm formCreacionArbustos("11");// Required grades: sign 145, exec 137
//         RobotomyRequestForm formRobotomy("22");// Required grades: sign 72, exec 45
//         PresidentialPardonForm formIndulto("33");// Required grades: sign 25, exec 5

//     try
// 	{
//         // Intentar firmar y ejecutar ShrubberyCreationForm
//         std::cout << YELLOW << "\nTesting ShrubberyCreationForm:" << RESET << std::endl;
//         burocrata2.signForm(formCreacionArbustos);
//         burocrata2.executeForm();

//         // Intentar firmar y ejecutar RobotomyRequestForm
//         std::cout << YELLOW << "\nTesting RobotomyRequestForm:" << RESET << std::endl;
//         burocrata1.signForm(formRobotomy);
//         burocrata1.executeForm();

//         // Intentar firmar y ejecutar PresidentialPardonForm
//         std::cout << YELLOW << "\nTesting PresidentialPardonForm:" << RESET << std::endl;
//         burocrata3.signForm(formIndulto);
//         burocrata3.executeForm();

//     } catch (const std::exception &e) {
//         std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
//     }

//     return 0;
// }

// int main() {
//     Bureaucrat alice("Alice", 50);
//     ShrubberyCreationForm shrubbery("Home");
//     RobotomyRequestForm robotomy("Marvin");
//     PresidentialPardonForm pardon("Zaphod");

//     alice.signForm(shrubbery);
//     alice.executeForm(shrubbery);

//     alice.signForm(robotomy);
//     alice.executeForm(robotomy);

//     alice.signForm(pardon);
//     alice.executeForm(pardon);

//     return 0;
// }

// int	main(void)
// {
// 	Bureaucrat	ferran("Ferran", 145);
// 	Bureaucrat	boss("Boss", 1);
// 	AForm		*shrubberyForm = new ShrubberyCreationForm("Joselito");
// 	AForm		*robotomyForm = new RobotomyRequestForm("Pandu");
// 	AForm		*pardonForm = new PresidentialPardonForm("Hannibal");

// 	try
// 	{
// 		std::cout << ferran << std::endl;
// 		std::cout << boss << std::endl;
// 		std::cout << *shrubberyForm << std::endl;
// 		std::cout << *robotomyForm << std::endl;
// 		std::cout << *pardonForm << std::endl;

// 		ferran.signForm(*shrubberyForm);
// 		ferran.executeForm(*shrubberyForm);

// 		std::cout << *shrubberyForm << std::endl;

// 		boss.executeForm(*shrubberyForm);

// 		std::cout << *robotomyForm << std::endl;
// 		ferran.signForm(*robotomyForm);
// 		boss.signForm(*robotomyForm);
// 		boss.executeForm(*robotomyForm);

// 		ferran.signForm(*pardonForm);
// 		ferran.executeForm(*pardonForm);
// 		boss.executeForm(*pardonForm);
// 		boss.signForm(*pardonForm);
// 		boss.executeForm(*pardonForm);
// 	}
// 	catch (std::exception & e)
// 	{
// 		std::cout << "Exception caught: " << e.what() << std::endl;
// 	}
// 	delete shrubberyForm;
// 	delete robotomyForm;
// 	delete pardonForm;
// 	return (0);
// }
