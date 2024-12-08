/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:39:17 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:39:30 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
        : x(Fixed(0)), y(Fixed(0)) {
}

Point::Point(const float x, const float y)
        : x(Fixed(x)), y(Fixed(y)) {
}

Point::Point(const Point &copy)
        : x(copy.x), y(copy.y) {
}

Point::~Point(void) {
}

Point &Point::operator=(const Point &p) {
    (void) p;
    return *this;
}

Fixed const Point::get_x(void) const {
    return this->x;
}

Fixed const Point::get_y(void) const {
    return this->y;
}
