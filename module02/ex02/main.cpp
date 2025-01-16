#include "Fixed.hpp"

//Allowed functions : roundf (from <cmath>)

int	main( void )
{
	Fixed		a;//Se llama al constructor por defecto que inicializa _fixedPointValue a 0
	Fixed const	b( Fixed( 5.05f ) * Fixed( 0 ) );//Se llama al constructor float y se multiplica por 2

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;//Fixed::max(a, b) devuelve el mayor de los dos objetos
	/*-------------------------------------*/
	std::cout << std::endl;
	std::cout << "a, b: " << a << ", " << b << std::endl;
	std::cout << std::endl;

	std::cout << "Comparison tests:" << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << std::endl;

	std::cout << "Arithmetic tests:" << std::endl ;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "100 / b: " << (Fixed(100) / b) << std::endl;

	std::cout << std::endl;

	std::cout << "min/max tests:" << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, 4): " << Fixed::max(a, Fixed(4)) << std::endl;
	std::cout << "min(a, 4): " << Fixed::min(a, Fixed(4)) << std::endl;

	return (0);
}
