/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:24:37 by castorga          #+#    #+#             */
/*   Updated: 2024/09/18 11:24:39 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

// Calculo del área de un triángulo utilizando la fórmula del determinante
Fixed area(Point const &p1, Point const &p2, Point const &p3)
{
    Fixed x1 = p1.getX();
    Fixed y1 = p1.getY();
    Fixed x2 = p2.getX();
    Fixed y2 = p2.getY();
    Fixed x3 = p3.getX();
    Fixed y3 = p3.getY();

    // Cálculo del área utilizando la fórmula
    Fixed area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)).abs() / Fixed(2);//abs() devuelve el valor absoluto de un número
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed totalArea = area(a, b, c);
    Fixed area1 = area(point, b, c);
    Fixed area2 = area(a, point, c);
    Fixed area3 = area(a, b, point);

    // Redondea los resultados de áreas y sumas
    Fixed sumOfAreas = (area1 + area2 + area3).toFloat();
    Fixed roundedSumOfAreas = Fixed(roundf(sumOfAreas.toFloat()));

    // Imprime los valores de depuración
    std::cout << "Total area: " << totalArea << std::endl;
    std::cout << "Area1: " << area1 << std::endl;
    std::cout << "Area2: " << area2 << std::endl;
    std::cout << "Area3: " << area3 << std::endl;
    std::cout << "Sum of areas: " << roundedSumOfAreas << std::endl;

    // Verifica si el punto está dentro del triángulo
    bool isInside = totalArea == roundedSumOfAreas && (area1 >= Fixed(0)) && (area2 >= Fixed(0)) && (area3 >= Fixed(0));
    std::cout << "Is inside: " << isInside << std::endl;
    return (isInside);
}
