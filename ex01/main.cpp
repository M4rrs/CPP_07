#include "iter.hpp"

int main( void ) {

	{
		int arr[] = {1, 8, 3, 5, 14};
		int len = sizeof(arr) / sizeof(int);

		::iter(arr, len, printVal);
		std::cout << std::endl;

		::iter(arr, len, isodd);
		std::cout << std::endl;

		std::cout << "ADD:" << std::endl;
		::iter(arr, len, add);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
		std::cout << std::endl;

		std::cout << "MINUS:" << std::endl;
		::iter(arr, len, minus);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
		std::cout << "============================================";
		std::cout << std::endl;
	}

	{
		char arr[] = {'a', 'e', 'h', 'p', 't', 'z', 'j'};
		int len = sizeof(arr);

		::iter(arr, len, printVal);
		std::cout << std::endl;

		::iter(arr, len, isodd);
		std::cout << std::endl;

		std::cout << "ADD:" << std::endl;
		::iter(arr, len, add);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
		std::cout << std::endl;

		std::cout << "MINUS:" << std::endl;
		::iter(arr, len, minus);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;

		std::cout << "============================================";
		std::cout << std::endl;
	}

	{
		float arr[] = {8.23f, 3.4f, 9.5f, 1.1f, 5.0f};
		int len = sizeof(arr) / sizeof(float);

		::iter(arr, len, printVal);
		std::cout << std::endl;

		::iter(arr, len, isodd);
		std::cout << std::endl;

		std::cout << "ADD:" << std::endl;
		::iter(arr, len, add);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;
		std::cout << std::endl;

		std::cout << "MINUS:" << std::endl;
		::iter(arr, len, minus);
		for (int i = 0; i < len; i++)
			std::cout << arr[i] << std::endl;

		std::cout << "============================================";
		std::cout << std::endl;
	}
}