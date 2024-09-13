# include "Harl.hpp"
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

Harl::Harl(){}

void Harl::debug()
{	
	std::cout << "[ DEBUG ]" << std:: endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << "\n";
	Harl::complain("info");	
}

void Harl::info()
{	
	std::cout << "[ INFO ]" << std:: endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << "\n";
	Harl::complain("warning");	
}

void Harl::warning()
{	
	std::cout << "[ WARNING ]" << std:: endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << "\n";
	Harl::complain("error");
}

void Harl::error()
{	
	std::cout << "[ ERROR ]" << std:: endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "debug", "info", "warning", "error" };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}

int main(int ac, char **av)
{
	Harl	instance;
(void)av;
	if (ac != 2)
	{
		std::cout << "Usage: ./a.out <level>" << std::endl;
		return (1);
	}
	{
		switch (av[1][0])
		{
			case 'd':
				instance.complain("debug");
				break;
			case 'i':
				instance.complain("info");
				break;
			case 'w':
				instance.complain("warning");
				break;
			case 'e':
				instance.complain("error");
				break;
			default:
				std::cout << "Invalid level" << std::endl;
				break;
		}
	}
	return (0);
}

Harl::~Harl(){}