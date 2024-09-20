#include "Fixed.hpp"

int	main( void )
{
	Fixed		a;//se llama al constructor por defecto
	Fixed const b( 10 );//se llama al constructor de int
	Fixed const c( 42.42f );//se llama al constructor de float
	Fixed const d( b );//se llama al constructor de copia
	a = Fixed( 1234.4321f );//se llama al constructor de float y luego al operador de asignación
	std::cout << "------------------------" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "------------------------" << std::endl;

	return (0);
}
