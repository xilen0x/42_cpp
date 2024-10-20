/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:34:11 by castorga          #+#    #+#             */
/*   Updated: 2024/10/03 17:34:13 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

/*La idea detrás del ejercicio es crear un sistema donde tienes "materias" (que 
son habilidades mágicas o técnicas), personajes que pueden usar esas materias, y 
una fuente de materias que permite crear nuevas instancias de ellas.*/

// int main(void)
// {
// 	IMateriaSource* src = new MateriaSource();//crea un puntero a MateriaSource

// 	src->learnMateria(new Ice());//apunta a la funcion learnMateria de MateriaSource y le pasa un puntero a Ice

// 	src->learnMateria(new Cure());//apunta a la funcion learnMateria de MateriaSource y le pasa un puntero a Cure

// 	ICharacter* me = new Character("me");

// 	AMateria* tmp;//crea un puntero a AMateria

// 	tmp = src->createMateria("ice");//apunta a la funcion createMateria de MateriaSource y le pasa un string "ice"
// 	me->equip(tmp);//apunta a la funcion equip de Character y le pasa un puntero a AMateria

// 	tmp = src->createMateria("cure");//apunta a la funcion createMateria de MateriaSource y le pasa un string "cure"
// 	me->equip(tmp);//apunta a la funcion equip de Character y le pasa un puntero a AMateria

// 	ICharacter* bob = new Character("bob");//crea un puntero a Character

// 	me->use(0, *bob);//apunta a la funcion use de Character y le pasa un entero 0 y una referencia a Character
// 	me->use(1, *bob);//apunta a la funcion use de Character y le pasa un entero 1 y una referencia a Character
// 	//std::cout << me->getName() << std::endl;
// 	delete bob;
// 	delete me;
// 	delete src;

// 	return (0);
// }

int main( void )
{
	std::cout << BOLD << BLUE << "1. Creating MateriaSource" << RESET << std::endl; 
	IMateriaSource* src = new MateriaSource();
	src->printMaterias();

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << GREEN << "2. \"src\" learning 5 materias" << RESET << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	Ice	*mat = new Ice();
	src->learnMateria(mat);
	delete mat;
	src->printMaterias();

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << MAGENTA << "3. Creating Character \"vilma\" and \"oktorok\"" << RESET << std::endl;
	Character* vilma = new Character("vilma");
	vilma->printMaterias();

	Character* oktorok = new Character("oktorok");
	oktorok->printMaterias();

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << YELLOW << "4. \"vilma\" trying to equip 5 materias and \"oktorok\" one materia" << RESET << std::endl;
	vilma->equip(NULL);
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	vilma->equip(tmp);
	delete tmp;

	tmp = src->createMateria("ice");
	vilma->equip(tmp);
	delete tmp;

	tmp = src->createMateria("cure");
	vilma->equip(tmp);
	delete tmp;

	tmp = src->createMateria("ice");
	vilma->equip(tmp);
	delete tmp;

	vilma->printMaterias();
	tmp = src->createMateria("ice");
	oktorok->equip(tmp);
	delete tmp;

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << CYAN << "5. Testing Character Assignation overload \"vilma = oktorok\"" << RESET << std::endl;	
	*oktorok = *vilma;

	vilma->unequip(0);
	std::cout << RED << "VILMA" << RESET << std::endl;
	vilma->printMaterias();
	std::cout << RED << "OKTOROK" << RESET << std::endl;
	oktorok->printMaterias();

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << RED << "6. Testing character copy constructor for deep copy" << RESET << std::endl; 
	Character* stardust = new Character(*vilma);
	stardust->printMaterias();

	tmp = src->createMateria("ice");
	vilma->equip(tmp);
	delete tmp;

	std::cout << RED << "VILMA" << RESET << std::endl;
	vilma->printMaterias();
	std::cout << RED << "STARDUST" << RESET << std::endl;
	stardust->printMaterias();

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << BLUE << "7. \"vilma\" using all equipped materias on \"oktorok\"" << RESET << std::endl;
	vilma->use(0, *oktorok);
	vilma->use(1, *oktorok);
	vilma->use(2, *oktorok);
	vilma->use(3, *oktorok);
	vilma->use(10, *oktorok);
	vilma->use(-1, *oktorok);

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << GREEN << "8. \"vilma\" trying to use unequipped materias on \"oktorok\"" << RESET << std::endl;
	vilma->unequip(0);
	vilma->use(0, *oktorok);

	// ------------------------------------------------------------------------------------ //

	std::cout << BOLD << MAGENTA << "9. New character \"lucifer\" equipping and unequipping materias" << RESET << std::endl;
	std::cout << std::endl;
	ICharacter* lucifer = new Character("lucifer");
	AMateria *cure = new Cure;
	AMateria *ice = new Ice;

	lucifer->equip(cure);
	lucifer->equip(ice);
	lucifer->equip(cure);
	lucifer->equip(ice);
	lucifer->unequip(0);
	lucifer->unequip(1);
	lucifer->unequip(2);
	lucifer->unequip(3);
	lucifer->equip(cure);
	lucifer->equip(ice);

	lucifer->printMaterias();

	delete cure;
	delete ice;
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //

	std::cout << RED << "10. Testing if unequipped materia is freed" << RESET << std::endl;
	std::cout << std::endl;

	ICharacter* test = new Character("test");

	tmp = src->createMateria("ice");
	test->equip(tmp);
	delete tmp;
	test->unequip(0);

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << RED << "11. Deleting \"vilma\", \"oktorok\", \"stardust\" and \"lucifer\"" << RESET << std::endl;
std::cout << std::endl;
	
	delete test;
	delete lucifer;
	delete stardust;
	delete oktorok;
	delete vilma;
	delete src;

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << RED << "12. Create new MateriaSource and learn materias (check maximum too):" << RESET << std::endl;
	std::cout << std::endl;
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	AMateria *mat2 = new Cure();
	src2->learnMateria(mat2);

	delete src2;

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << GREEN << "13. Create 2 new characters and test deep copy:" << RESET << std::endl;
	std::cout << std::endl;
	Character *dur0 = new Character("Alice");
	ICharacter *dur1 = new Character(*dur0);
	
	delete dur0;
	delete dur1;

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ /
	std::cout << YELLOW << "14. Create materias and equip them (also check unknown materias):" << RESET << std::endl;
	std::cout << std::endl;

	IMateriaSource* src3 = new MateriaSource();
	AMateria* tmp2;
	ICharacter *dur2 = new Character("Alice");
	tmp2 = src3->createMateria("ice");
	dur2->equip(tmp2);
	delete tmp2;
	tmp2 = src3->createMateria("cure");
	dur2->equip(tmp2);
	delete tmp2;
	tmp2 = src3->createMateria("hi");
	dur2->equip(tmp2);
	delete tmp2;

	delete src3;

	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << BLUE << "15. Check maximum equipped too:" << RESET << std::endl;
	std::cout << std::endl;
	AMateria *cure2 = new Cure();
	AMateria *ice2 = new Ice();
	dur2->equip(cure2);
	dur2->equip(cure2);
	dur2->equip(ice2);
	dur2->unequip(2);
	delete cure2; // Cure must be deleted manually when unequipped
	delete ice2; // Ice must be deleted manually when unequipped
	dur2->unequip(2);
	dur2->unequip(6);
	std::cout << std::endl;

// ------------------------------------------------------------------------------------ //
	std::cout << MAGENTA << "16. Use materias on new chacarter:" << RESET << std::endl;
	std::cout << std::endl;
	ICharacter* bob = new Character("Bob");
	dur2->use(0, *bob);
	dur2->use(1, *bob);
	dur2->use(2, *bob);
	dur2->use(6, *bob);
	dur2->use(-4, *bob);
	dur2->use(3, *bob);
	delete bob;
	std::cout << std::endl;

	delete dur2;
	delete mat2;

	return (0);
}