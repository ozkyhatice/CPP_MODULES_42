/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:38:14 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:38:53 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	bool	sign[3];

	sign[0] = ((b.get_x() - point.get_x()) * (c.get_y() - b.get_y()) - (c.get_x() - b.get_x()) * (b.get_y() - point.get_y())) > 0;
	sign[1] = ((a.get_x() - point.get_x()) * (b.get_y() - a.get_y()) - (b.get_x() - a.get_x()) * (a.get_y() - point.get_y())) > 0;
	sign[2] = ((c.get_x() - point.get_x()) * (a.get_y() - c.get_y()) - (a.get_x() - c.get_x()) * (c.get_y() - point.get_y())) > 0;

	return sign[0] == sign[1] && sign[1] == sign[2];
}