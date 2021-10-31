#include <iostream>
#include <time.h>
#include "Mirror.h"
int main() {
	try {
		srand(time(NULL));
		int size;
		std::cin >> size;
		while (size < 0)
			std::cin >> size;
		char* mas = new char[size];
		for (int i = 0; i < size; i++)
			std::cout << (mas[i] = (char)(3 + rand() % 120)) << " ";
		std::cout << std::endl;
		mas = mirror(mas, size);
		for (int i = 0; i < size; i++)
			std::cout << mas[i] << " ";
		std::cout << std::endl;
		delete[] mas;
	}
	catch (...) {
		std::cout << " Incorrect number ";
	}
	return 0;
}