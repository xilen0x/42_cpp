#include "Fixed.hpp"

int main( void )
{
	Fixed a;//se crea un objeto de la clase Fixed y se llama al constructor por defecto
	std::cout << "-----------------------------------" << std::endl;
	Fixed b( a );//se crea un objeto de la clase Fixed y se llama al constructor de copia(Esto sucede porque estás creando b a partir de a.)
	std::cout << "-----------------------------------" << std::endl;
	Fixed c;//se crea un objeto de la clase Fixed y se llama al constructor por defecto
	std::cout << "-----------------------------------" << std::endl;
	c = b;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}
