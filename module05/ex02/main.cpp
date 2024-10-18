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
        Bureaucrat b1("Alice", 50);
        Bureaucrat b2("Bob", 140);
        Bureaucrat b3("Charlie", 5);

        // Crear Formularios con targets específicos
        ShrubberyCreationForm shrubbery("Home");
        RobotomyRequestForm robotomy("Marvin");
        PresidentialPardonForm pardon("Zaphod");

        // Intentar firmar y ejecutar ShrubberyCreationForm
        std::cout << YELLOW << "\nTesting ShrubberyCreationForm:" << RESET << std::endl;
        b2.signForm(shrubbery);
        b2.executeForm(shrubbery);

        // Intentar firmar y ejecutar RobotomyRequestForm
        std::cout << YELLOW << "\nTesting RobotomyRequestForm:" << RESET << std::endl;
        b1.signForm(robotomy);
        b1.executeForm(robotomy);

        // Intentar firmar y ejecutar PresidentialPardonForm
        std::cout << YELLOW << "\nTesting PresidentialPardonForm:" << RESET << std::endl;
        b3.signForm(pardon);
        b3.executeForm(pardon);

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
