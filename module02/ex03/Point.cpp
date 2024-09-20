/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:24:53 by castorga          #+#    #+#             */
/*   Updated: 2024/09/18 11:24:55 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constructor
Point::Point() : x(0), y(0){}

// Parameterized constructor
Point::Point(float const x, float const y) : x(x), y(y) {}

// Copy constructor
Point::Point(const Point& obj) : x(obj.x), y(obj.y) {}

// Assignment operator
Point& Point::operator=(const Point& obj){
	(void)obj;
	return *this;
}

// Getter for x
Fixed Point::getX() const {
	return x;
}

// Getter for y
Fixed Point::getY() const {
	return y;
}

Point::~Point() {}
