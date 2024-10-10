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

int main(void)
{
	IMateriaSource* src = new MateriaSource();//crea un puntero a MateriaSource

	src->learnMateria(new Ice());//apunta a la funcion learnMateria de MateriaSource y le pasa un puntero a Ice

	src->learnMateria(new Cure());//apunta a la funcion learnMateria de MateriaSource y le pasa un puntero a Cure

	ICharacter* me = new Character("me");

	AMateria* tmp;//crea un puntero a AMateria

	tmp = src->createMateria("ice");//apunta a la funcion createMateria de MateriaSource y le pasa un string "ice"
	me->equip(tmp);//apunta a la funcion equip de Character y le pasa un puntero a AMateria

	tmp = src->createMateria("cure");//apunta a la funcion createMateria de MateriaSource y le pasa un string "cure"
	me->equip(tmp);//apunta a la funcion equip de Character y le pasa un puntero a AMateria

	ICharacter* bob = new Character("bob");//crea un puntero a Character

	me->use(0, *bob);//apunta a la funcion use de Character y le pasa un entero 0 y una referencia a Character
	me->use(1, *bob);//apunta a la funcion use de Character y le pasa un entero 1 y una referencia a Character
	//std::cout << me->getName() << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}

