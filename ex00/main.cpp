/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:22:55 by nnorazma          #+#    #+#             */
/*   Updated: 2023/07/14 14:22:57 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main( void ) {
	{
	int a = 2;
	int b = 4;
	std::cout << "(A = 2, B = 4) Minimum: " << ::min(a, b)
			<< std::endl;
	std::cout << "(A = 2, B = 4) Maximum: " << ::max(a, b)
			<< std::endl;		

	std::cout << std::endl;
	std::cout << "Before swap: [A = " << a
			<< "] [B = " << b << "]"
			<< std::endl;
	::swap(a, b);
	std::cout << "After swap: [A = " << a
			<< "] [B = " << b << "]"
			<< std::endl;
	std::cout << " ================================== "<< std::endl;
	}

	{
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "(String C, String D) Minimum: " << ::min(c, d)
			<< std::endl;
	std::cout << "(String C, String D) Maximum: " << ::max(c, d)
			<< std::endl;		

	std::cout << std::endl;
	std::cout << "Before swap: [String C = \"" << c
			<< "\"] [String D = \"" << d << "\"]"
			<< std::endl;
	::swap(c, d);
	std::cout << "After swap: [String C = \"" << c
			<< "\"] [String D = \"" << d << "\"]"
			<< std::endl;
	std::cout << " ================================== "<< std::endl;
	}

	{
	float e = 12.5f;
	float f = 42.1f;

	std::cout << "(E = 12.5, F = 42.1) Minimum: " << ::min(e, f)
			<< std::endl;
	std::cout << "(E = 12.5, F = 42.1) Maximum: " << ::max(e, f)
			<< std::endl;		

	std::cout << std::endl;
	std::cout << "Before swap: [E = " << e
			<< "] [F = " << f << "]"
			<< std::endl;
	::swap(e, f);
	std::cout << "After swap: [E = " << e
			<< "] [F = " << f << "]"
			<< std::endl;
	std::cout << " ================================== "<< std::endl;
	}

	{
	char g = 'a';
	char h = '+';
	std::cout << "(G = 'a', H = '+') Minimum: " << ::min(g, h)
			<< std::endl;
	std::cout << "(G = 'a', H = '+') Maximum: " << ::max(g, h)
			<< std::endl;		

	std::cout << std::endl;
	std::cout << "Before swap: [G = '" << g
			<< "] [H = " << h << "]"
			<< std::endl;
	::swap(g, h);
	std::cout << "After swap: [G = '" << g
			<< "'] [H = '" << h << "']"
			<< std::endl;
	std::cout << std::endl;
	}
}