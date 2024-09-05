#include "Zombie.hpp"

/**
 * @brief Crea un nuevo objeto Zombie en el heap.
 *
 * Asigna dinámicamente un nuevo objeto Zombie con el nombre proporcionado y lo devuelve.
 *
 * @param name El nombre del nuevo Zombie.
 * @return Un puntero al nuevo objeto Zombie.
 */
Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
