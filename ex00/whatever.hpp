/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:23:03 by nnorazma          #+#    #+#             */
/*   Updated: 2023/07/14 14:23:04 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap( T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

template <typename T> T min( T x, T y ) {
	return(x < y ? x : y);
}

template <typename T> T max( T x, T y ) {
	return(x > y? x : y);
}