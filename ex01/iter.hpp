/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:22:45 by nnorazma          #+#    #+#             */
/*   Updated: 2023/07/14 14:22:46 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void printVal(T &t) {
	std::cout << t << std::endl;
}

template <typename T> void add(T &t) {
	t++;
}

template <typename T> void minus(T &t) {
	t--;
}

template <typename T> void isodd(T t) {
	std::cout << (!((int)t % 2) ? "even" : "odd") << std::endl;
}

template <typename T> void iter( T arr[], int len, void(*f)(T &)) {
	if (!arr || !f)
		return ;

	for (int i = 0; i < len; i++)
		f(arr[i]);
}