#ifndef laba17
#define laba 17
template <typename T>
T* mirror(T* mass, int size) {
	try {
		if (size % 2 == 1 || size = 0)
			throw - 1;
		T* temp = new T[size];
		for (int i = 0; i < size; i++)
			temp[i] = mass[size - i - 1];
		mass = temp;
		return mass;
	}
	catch (int n) {
		std::cout << "incorrect size" << std::endl;
		return 0;
	}
}
#endif laba17
