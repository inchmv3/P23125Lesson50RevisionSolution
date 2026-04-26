// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию (или программу), которая меняет 
// экстремальные элементы вектора местами. Если экстремальных элементов
// несколько, то необходимо поменять последние найденные элементы.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.

#include "logic.h"
#include "test.h"

int search_min_element(int array[], int size) {
	int min_ind = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] <= array[min_ind]) {
			min_ind = i;
		}
	}
	return min_ind;
}
int search_max_element(int array[], int size) {
	int max_ind = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] >= array[max_ind]) {
			max_ind = i;
		}
	}
	return max_ind;
}

void swap_extrem_elements(int array[], int size) {
	if (size <= 0) {
		return;
	}
	int max_el = search_max_element(array, size);
	int min_el = search_min_element(array, size);

	int t = array[min_el];
	array[min_el] = array[max_el];
	array[max_el] = t;
}
