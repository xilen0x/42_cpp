#include "Zombie.hpp"

/**
 * @brief Constructor de la clase Zombie.
 * @param name El nombre del zombie.
 */
Zombie::Zombie(std::string name){
	this->name = name;}
	
/** @brief Imprime un mensaje de anuncio del Zombie. */
void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/**
 * @brief Destructor de la clase Zombie.
 * Imprime un mensaje indicando que el Zombie ha muerto.
 */
Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " is dead" << std::endl;
}
