#include "Zombie.hpp"

/**
 * @brief Crea un Zombie con el nombre dado y llama a su método `announce`.
 * @param name El nombre del zombie.
 */
void	randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
