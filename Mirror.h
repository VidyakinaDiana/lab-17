#ifndef laba17
#define laba 17
template <typename T>
T* mirror(T* mass, int size) {
	if (size % 2 == 1 || size == 0)
		throw "incorrect size";
	T* temp = new T[size];
	for (int i = 0; i < size; i++)
		temp[i] = mass[size - i - 1];
	mass = temp;
	return mass;
}
#endif laba17
