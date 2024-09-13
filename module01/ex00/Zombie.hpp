#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/** @brief Representa un zombie con un nombre y capacidad para hablar. */
class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();

		void announce(void);
};


#endif