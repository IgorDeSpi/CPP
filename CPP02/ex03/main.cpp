/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-spir <ide-spir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:41:17 by ide-spir          #+#    #+#             */
/*   Updated: 2023/04/06 11:55:59 by ide-spir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    std::cout << std::boolalpha

        << "a(0, 0), b(0, 5), c(5, 0), point(1, 1): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(1, 1)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(0, 5): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 5)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(0, 3): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 3)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(0, 0): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, 0)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(0.1, 0.01): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0.1f, 0.01f)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(10, 0.01): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(10, 0.01f)) << std::endl

        << "a(0, 0), b(0, 5), c(5, 0), point(0, -0.01): "
        << bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(0, -0.01f)) << std::endl;
}