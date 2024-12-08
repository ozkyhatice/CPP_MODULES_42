/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:39:29 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:39:30 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
    private:

        Fixed const x;
        Fixed const y;
    public:
        Point(void);

        Point(const float x, const float y);

        Point(const Point &copy);

        ~Point(void);

        Point &operator=(const Point &p);

        Fixed const get_x(void) const;

        Fixed const get_y(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);