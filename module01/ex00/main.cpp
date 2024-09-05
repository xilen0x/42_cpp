
# include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie *heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete(heapZombie);

	randomChump("stackZombie");
	return(0);
}
