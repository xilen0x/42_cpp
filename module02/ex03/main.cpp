#include "Fixed.hpp"
#include "Point.hpp"
//Allowed functions : roundf (from <cmath>)


int main()
{
    // Definición de los vértices del triángulo
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);
    // Punto dentro del triángulo
    Point p_inside(5.0f, 5.0f);

	std::cout << "----------" << std::endl;
    // Punto fuera del triángulo
    Point p_outside(10.0f, 10.0f);
    if (bsp(a, b, c, p_inside))
        std::cout << "True: The point is inside the triangle" << std::endl;
    else
        {std::cout << "False: The point is outside the triangle" << std::endl;}

	std::cout << "---------" << std::endl;
    
	if (bsp(a, b, c, p_outside))
        std::cout << "True: The point is inside the triangle" << std::endl;
    else
        std::cout << "False: The point is outside the triangle" << std::endl;

    return 0;
}


