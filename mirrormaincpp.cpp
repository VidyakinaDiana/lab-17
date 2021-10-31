#include <iostream>
#include <time.h>
#include "Mirror.h"

int main() {
	srand(time(NULL));
	int size = 6;
	int* mas = new int[size];
	for (int i = 0; i < size; i++)
		std::cout << (mas[i] = rand() / 20) << " ";
	std::cout << std::endl;
	mas = mirror(mas, size);
	for (int i = 0; i < size; i++)
		std::cout << mas[i] << " ";
	std::cout << std::endl;
	size = 4;
	char* mas1 = new char[size];
	for (int i = 0; i < size; i++)
		std::cout << (mas1[i] = (char)(rand() / 20)) << " ";
	std::cout << std::endl;
	mas1 = mirror(mas1, size);
	for (int i = 0; i < size; i++)
		std::cout << mas1[i] << " ";
	std::cout << std::endl;
	size = 5;
	int* mas2 = new int[size];
	for (int i = 0; i < size; i++)
		std::cout << (mas2[i] = rand() / 20) << " ";
	std::cout << std::endl;
	mas2 = mirror(mas2, size);
	delete[] mas;
	delete[] mas1;
	delete[] mas2;
	return 0;
}