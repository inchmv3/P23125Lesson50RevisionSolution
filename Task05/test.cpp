#include "test.h"

string convert(int array[], int size) {
	if (size <= 0) {
		return "";
	}

	string s = to_string(array[0]);
	for (int i = 1; i < size; i++)
	{
		s += " " + to_string(array[i]);
	}
	return s;
}

void print(int array[], int expected[], int size, string name) {

	reverse(array, size);

	bool result = true;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != expected[i]) {
			result = false;
			break;
		}
	}

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "Array before:\t" << convert(array, size) << endl;
		cout << "Array after:\t" << convert(array, size) << endl;
	}

	cout << "----------------------------------------------------" << endl;
}

// basic case (even number of elements)
void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int expected[]{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	print(array, expected, size, "test01");
}

// basic case (odd number of elements)
void test02() {
	int array[]{ 10, 9, 8, 7, 6, 5, 4, 3, 2 };
	int size = 9;
	int expected[]{ 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(array, expected, size, "test02");
}

// basic case (even number of elements)
void test03() {
	int array[]{ 1, -2, 6, 5, -8, 7 };
	int size = 6;
	int expected[]{ 7, -8, 5, 6, -2, 1 };
	print(array, expected, size, "test03");
}

// basic case (odd number of elements)
void test04() {
	int array[]{ -2, 6, 5, -8, 7 };
	int size = 5;
	int expected[]{ 7, -8, 5, 6, -2 };
	print(array, expected, size, "test04");
}

// all the same elements
void test05() {
	int array[]{ 1, 1, 1, 1, 1 };
	int size = 5;
	int expected[]{ 1, 1, 1, 1, 1 };
	print(array, expected, size, "test05");
}

// only one element
void test06() {
	int array[]{ 7 };
	int size = 1;
	int expected[]{ 7 };
	print(array, expected, size, "test06");
}

// two elements
void test07() {
	int array[]{ 1, 2 };
	int size = 2;
	int expected[]{ 2, 1 };
	print(array, expected, size, "test07");
}

// two elements
void test08() {
	int array[]{ 2, 1 };
	int size = 2;
	int expected[]{ 1, 2 };
	print(array, expected, size, "test08");
}

// wrong size
void test09() {
	int array[]{ 0 };
	int size = -1;
	int expected[]{ 0 };
	print(array, expected, size, "test09");
}

// wrong size
void test10() {
	int array[]{ 1 };
	int size = 0;
	int expected[]{ 1 };
	print(array, expected, size, "test10");
}