/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:25:00 by castorga          #+#    #+#             */
/*   Updated: 2024/09/18 11:25:01 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;

	public:
	Point();
	Point(float const x, float const y);
	Point(const Point& obj);//copy constructor
	Point& operator=(const Point& obj);//assignment operator
	~Point();

	//getters
	Fixed getX() const;
	Fixed getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
