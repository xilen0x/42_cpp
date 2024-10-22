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

int main() {
    try {
        // Crear Burócratas con diferentes niveles
		Bureaucrat burocrata1("Burocrata 1", 1);
		Bureaucrat burocrata2("Burocrata 2", 50);
		Bureaucrat burocrata3("Burocrata 3", 150);

        // Crear Formularios con targets específicos
        ShrubberyCreationForm formCreacionArbustos("Home");
		RobotomyRequestForm formRobotomy("castorga");
		PresidentialPardonForm formIndulto("Zaphod");

        // Intentar firmar y ejecutar ShrubberyCreationForm
        std::cout << YELLOW << "\nTesting ShrubberyCreationForm:" << RESET << std::endl;
        burocrata2.signForm(formCreacionArbustos);
        burocrata2.executeForm(formCreacionArbustos);

        // Intentar firmar y ejecutar RobotomyRequestForm
        std::cout << YELLOW << "\nTesting RobotomyRequestForm:" << RESET << std::endl;
        burocrata1.signForm(formRobotomy);
        burocrata1.executeForm(formRobotomy);

        // Intentar firmar y ejecutar PresidentialPardonForm
        std::cout << YELLOW << "\nTesting PresidentialPardonForm:" << RESET << std::endl;
        burocrata3.signForm(formIndulto);
        burocrata3.executeForm(formIndulto);

    } catch (const std::exception &e) {
        std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
    }

    return 0;
}

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
