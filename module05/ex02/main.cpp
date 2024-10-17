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

//main para testar
int main()
{
	Bureaucrat b1("Bureaucrat 1", 1);
	Bureaucrat b2("Bureaucrat 2", 150);
	Bureaucrat b3("Bureaucrat 3", 50);
	Bureaucrat b4("Bureaucrat 4", 100);
	Bureaucrat b5("Bureaucrat 5", 75);
	Bureaucrat b6("Bureaucrat 6", 25);
	Bureaucrat b7("Bureaucrat 7", 125);
	Bureaucrat b8("Bureaucrat 8", 175);
	Bureaucrat b9("Bureaucrat 9", 0);
	Bureaucrat b10("Bureaucrat 10", 200);

	std::cout << "Bureaucrat 1: " << b1 << std::endl;
	std::cout << "Bureaucrat 2: " << b2 << std::endl;
	std::cout << "Bureaucrat 3: " << b3 << std::endl;
	std::cout << "Bureaucrat 4: " << b4 << std::endl;
	std::cout << "Bureaucrat 5: " << b5 << std::endl;
	std::cout << "Bureaucrat 6: " << b6 << std::endl;
	std::cout << "Bureaucrat 7: " << b7 << std::endl;
	std::cout << "Bureaucrat 8: " << b8 << std::endl;
	std::cout << "Bureaucrat 9: " << b9 << std::endl;
	std::cout << "Bureaucrat 10: " << b10 << std::endl;

	std::cout << std::endl;

	AForm f1("Form 1", 1, 1);
	AForm f2("Form 2", 150, 150);
	AForm f3("Form 3", 50, 50);
	AForm f4("Form 4", 100, 100);
	AForm f5("Form 5", 75, 75);
	AForm f6("Form 6", 25, 25);
	AForm f7("Form 7", 125, 125);
	AForm f8("Form 8", 175, 175);
	AForm f9("Form 9", 0, 0);
	AForm f10("Form 10", 200, 200);

	std::cout << "Form 1: " << f1 << std::endl;
	std::cout << "Form 2: " << f2 << std::endl;
	std::cout << "Form 3: " << f3 << std::endl;
	std::cout << "Form 4: " << f4 << std::endl;
	std::cout << "Form 5: " << f5 << std::endl;
	std::cout << "Form 6: " << f6 << std::endl;
	std::cout << "Form 7: " << f7 << std::endl;
	std::cout << "Form 8: " << f8 << std::endl;
	std::cout << "Form 9: " << f9 << std::endl;
	std::cout << "Form 10: " << f10 << std::endl;

	std::cout << std::endl;

	ShrubberyCreationForm s1("ShrubberyCreationForm 1");
	ShrubberyCreationForm s2("ShrubberyCreationForm 2");
	ShrubberyCreationForm s3("ShrubberyCreationForm 3");
	ShrubberyCreationForm s4("ShrubberyCreationForm 4");
	ShrubberyCreationForm s5("ShrubberyCreationForm 5");
	ShrubberyCreationForm s6("ShrubberyCreationForm 6");
	ShrubberyCreationForm s7("ShrubberyCreationForm 7");
	ShrubberyCreationForm s8("ShrubberyCreationForm 8");
	ShrubberyCreationForm s9("ShrubberyCreationForm 9");
	ShrubberyCreationForm s10("ShrubberyCreationForm 10");

	std::cout << "ShrubberyCreationForm 1: " << s1 << std::endl;
	std::cout << "ShrubberyCreationForm 2: " << s2 << std::endl;
	std::cout << "ShrubberyCreationForm 3: " << s3 << std::endl;
	std::cout << "ShrubberyCreationForm 4: " << s4 << std::endl;
	std::cout << "ShrubberyCreationForm 5: " << s5 << std::endl;
	std::cout << "ShrubberyCreationForm 6: " << s6 << std::endl;
	std::cout << "ShrubberyCreationForm 7: " << s7 << std::endl;
	std::cout << "ShrubberyCreationForm 8: " << s8 << std::endl;
	std::cout << "ShrubberyCreationForm 9: " << s9 << std::endl;
	std::cout << "ShrubberyCreationForm 10: " << s10 << std::endl;

	std::cout << std::endl;

	RobotomyRequestForm r1("RobotomyRequestForm 1");
	RobotomyRequestForm r2("RobotomyRequestForm 2");
	RobotomyRequestForm r3("RobotomyRequestForm 3");
	RobotomyRequestForm r4("RobotomyRequestForm 4");
	RobotomyRequestForm r5("RobotomyRequestForm 5");
	RobotomyRequestForm r6("RobotomyRequestForm 6");
	RobotomyRequestForm r7("RobotomyRequestForm 7");
	RobotomyRequestForm r8("RobotomyRequestForm 8");
	RobotomyRequestForm r9("RobotomyRequestForm 9");
	RobotomyRequestForm r10("RobotomyRequestForm 10");

	std::cout << "RobotomyRequestForm 1: " << r1 << std::endl;
	std::cout << "RobotomyRequestForm 2: " << r2 << std::endl;
	std::cout << "RobotomyRequestForm 3: " << r3 << std::endl;
	std::cout << "RobotomyRequestForm 4: " << r4 << std::endl;
	std::cout << "RobotomyRequestForm 5: " << r5 << std::endl;
	std::cout << "RobotomyRequestForm 6: " << r6 << std::endl;
	std::cout << "RobotomyRequestForm 7: " << r7 << std::endl;
	std::cout << "RobotomyRequestForm 8: " << r8 << std::endl;
	std::cout << "RobotomyRequestForm 9: " << r9 << std::endl;
	std::cout << "RobotomyRequestForm 10: " << r10 << std::endl;

	std::cout << std::endl;

	PresidentialPardonForm p1("PresidentialPardonForm 1");
	PresidentialPardonForm p2("PresidentialPardonForm 2");
	PresidentialPardonForm p3("PresidentialPardonForm 3");
	PresidentialPardonForm p4("PresidentialPardonForm 4");
	PresidentialPardonForm p5("PresidentialPardonForm 5");
	PresidentialPardonForm p6("PresidentialPardonForm 6");
	PresidentialPardonForm p7("PresidentialPardonForm 7");
	PresidentialPardonForm p8("PresidentialPardonForm 8");
	PresidentialPardonForm p9("PresidentialPardonForm 9");
	PresidentialPardonForm p10("PresidentialPardonForm 10");

	std::cout << "PresidentialPardonForm 1: " << p1 << std::endl;
	std::cout << "PresidentialPardonForm 2: " << p2 << std::endl;
	std::cout << "PresidentialPardonForm 3: " << p3 << std::endl;
	std::cout << "PresidentialPardonForm 4: " << p4 << std::endl;
	std::cout << "PresidentialPardonForm 5: " << p5 << std::endl;
	std::cout << "PresidentialPardonForm 6: " << p6 << std::endl;
	std::cout << "PresidentialPardonForm 7: " << p7 << std::endl;
	std::cout << "PresidentialPardonForm 8: " << p8 << std::endl;
	std::cout << "PresidentialPardonForm 9: " << p9 << std::endl;
	std::cout << "PresidentialPardonForm 10: " << p10 << std::endl;

	std::cout << std::endl;

	b1.signForm(f1);
	b1.signForm(s1);
	b1.signForm(r1);
	b1.signForm(p1);

	b2.signForm(f2);
	b2.signForm(s2);
	b2.signForm(r2);
	b2.signForm(p2);

	b3.signForm(f3);
	b3.signForm(s3);
	b3.signForm(r3);
	b3.signForm(p3);

	b4.signForm(f4);
	b4.signForm(s4);
	b4.signForm(r4);
	b4.signForm(p4);

	b5.signForm(f5);
	b5.signForm(s5);
	b5.signForm(r5);
	b5.signForm(p5);
	
	b6.signForm(f6);
	b6.signForm(s6);
	b6.signForm(r6);
	b6.signForm(p6);

	b7.signForm(f7);
	b7.signForm(s7);
	b7.signForm(r7);
	b7.signForm(p7);

	b8.signForm(f8);
	b8.signForm(s8);
	b8.signForm(r8);
	b8.signForm(p8);

	b9.signForm(f9);
	b9.signForm(s9);
	b9.signForm(r9);
	b9.signForm(p9);

	b10.signForm(f10);
	b10.signForm(s10);
	b10.signForm(r10);
	b10.signForm(p10);

	std::cout << std::endl;

	b1.executeForm(f1);
	b1.executeForm(s1);
	b1.executeForm(r1);
	b1.executeForm(p1);

	b2.executeForm(f2);
	b2.executeForm(s2);
	b2.executeForm(r2);
	b2.executeForm(p2);

	b3.executeForm(f3);
	b3.executeForm(s3);
	b3.executeForm(r3);
	b3.executeForm(p3);

	b4.executeForm(f4);
	b4.executeForm(s4);
	b4.executeForm(r4);
	b4.executeForm(p4);

	b5.executeForm(f5);
	b5.executeForm(s5);
	b5.executeForm(r5);
	b5.executeForm(p5);

	b6.executeForm(f6);
	b6.executeForm(s6);
	b6.executeForm(r6);
	b6.executeForm(p6);

	b7.executeForm(f7);
	b7.executeForm(s7);
	b7.executeForm(r7);
	b7.executeForm(p7);

	b8.executeForm(f8);
	b8.executeForm(s8);
	b8.executeForm(r8);
	b8.executeForm(p8);

	b9.executeForm(f9);
	b9.executeForm(s9);
	b9.executeForm(r9);
	b9.executeForm(p9);

	b10.executeForm(f10);
	b10.executeForm(s10);
	b10.executeForm(r10);
	b10.executeForm(p10);

	return (0);
}

