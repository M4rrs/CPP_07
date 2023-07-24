/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:22:28 by nnorazma          #+#    #+#             */
/*   Updated: 2023/07/24 16:08:47 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define GREEN "\033[32;1m"
#define RESET "\033[0m"
#define MAX_VAL 750

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
	std::cout << GREEN << "================= clone test =================" << RESET << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

	std::cout << GREEN << "========= test my Array and test Arr =========" << RESET << std::endl;
	std::cout << "If anything within this test scope prints out after this, then something was wrong. If not, :thumbs_up:" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	std::cout << GREEN << "========= testing out of bound indexes =========" << RESET << std::endl;
    try
    {
		std::cout << "Negative index range: ";
        numbers[-2] = 0;
    }
    catch(const Array<int>::outOfBounds &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "Maximum index range: ";
        numbers[MAX_VAL] = 0;
    }
    catch(const Array<int>::outOfBounds &e)
    {
        std::cerr << e.what() << '\n';
    }

	//idk what this test is, it was in the pdf.
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}