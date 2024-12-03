/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:10 by castorga          #+#    #+#             */
/*   Updated: 2024/10/22 16:13:12 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

// Constructors
Intern::Intern(void){}

// Copy constructor
Intern::Intern(Intern &copy)
{
	*this = copy;
}

// Operator assignment overload
Intern &Intern::operator=(Intern &copy)
{
	(void)copy;
	return (*this);
}

// Definición de las funciones creadoras de formularios específicos
AForm* createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm* createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm* createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

// Estructura que asocia nombres de formularios con las funciones creadoras
struct FormType {
    const char* name; // Nombre del formulario
    AForm* (*create)(const std::string &target); // Puntero a función que crea un formulario
};

// Member functions
AForm *Intern::makeForm(std::string formName, std::string target)
{
    // Array de estructuras que mapea los nombres de formularios con sus respectivas funciones creadoras
    const FormType formTypes[] = {
        { "presidential pardon", &createPresidentialPardonForm },
        { "robotomy request", &createRobotomyRequestForm },
        { "shrubbery creation", &createShrubberyCreationForm }
    };

    // Bucle para buscar el formulario correspondiente
    for (int i = 0; i < 3; ++i) {
        if (formTypes[i].name == formName) {
            std::cout << YELLOW "Intern creates " << formName << RESET << std::endl;
            return formTypes[i].create(target);  // se devuelve el puntero al formulario creado
        }
    }
    // Si no se encuentra el nombre del formulario, mostrar mensaje de error explícito
    std::cout << "Error: Form '" << formName << "' not found." << std::endl;
    throw FormNotFound();
}

// Excepción para formularios no encontrados
const char* Intern::FormNotFound::what() const throw() {
    return "Form not found.";
}

// Destructor
Intern::~Intern(void){}
