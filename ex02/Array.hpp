/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnorazma <nnorazma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:22:25 by nnorazma          #+#    #+#             */
/*   Updated: 2023/07/21 12:51:44 by nnorazma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
template <typename T> class Array {
	private:
		T *_arr;
		int _size;

	public:
		Array( void ) : _size(0) {
			this->_arr = new T[0];
			std::cout << "Default Array constructed. Size = 0" << std::endl;
		}

		Array( int n ) : _size(n) {
			this->_arr = new T[n];
			std::cout << "Array constructed. Size = " << _size << std::endl;
		}

		~Array( void ) {
			if (this->_arr)
				delete[] this->_arr;
			std::cout << "Array destructed." << std::endl;
		}

		Array( const Array &copy ) {
			*this = copy;
			std::cout << "Array cloned." << std::endl;
		}

		Array &operator=( const Array &assign ) {
			if ((this->_size = assign.size())) {
				this->_arr = new T[this->_size];
				for (int i = 0; i < this->_size; i++)
					this->_arr[i] = assign._arr[i];
			}
	
			return (*this);
		}

		T &operator[]( int index ) {
			if (index >= this->_size)
				throw Array::outOfBounds();
			return (this->_arr[index]);
		}

		int size( void ) const {
			return (this->_size);
		};

		class outOfBounds : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Out of index range.");
				};
		};
};