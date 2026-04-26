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
	swap_extrem_elements(array, size);
	
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

// extreme elements are at the very beginning and end
void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int expected[]{ 10, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
	print(array, expected, size, "test01");
}

// several extreme elements (basic case)
void test02() {
	int array[]{ 1, 1, 1, 4, 5, 6, 10, 8, 10, 10 };
	int size = 10;
	int expected[]{ 1, 1, 10, 4, 5, 6, 10, 8, 10, 1 };
	print(array, expected, size, "test02");
}

// extreme elements are at the very beginning and end
void test03() {
	int array[]{ 5, 4, 3, 2, 1 };
	int size = 5;
	int expected[]{ 1, 4, 3, 2, 5 };
	print(array, expected, size, "test03");
}

// several extreme elements (basic case)
void test04() {
	int array[]{ 5, 5, 1, 2, 1 };
	int size = 5;
	int expected[]{ 5, 1, 1, 2, 5 };
	print(array, expected, size, "test04");
}

// two elements
void test05() {
	int array[]{ 1, 2 };
	int size = 2;
	int expected[]{ 2, 1 };
	print(array, expected, size, "test05");
}

// two elements
void test06() {
	int array[]{ 2, 1 };
	int size = 2;
	int expected[]{ 1, 2 };
	print(array, expected, size, "test06");
}

// all matching elements 
void test07() {
	int array[]{ 5, 5, 5 };
	int size = 3;
	int expected[]{ 5, 5, 5 };
	print(array, expected, size, "test07");
}

// wrong size
void test08() {
	int array[]{ 0 };
	int size = -1;
	int expected[]{ 0 };
	print(array, expected, size, "test08");
}

// wrong size
void test09() {
	int array[]{ 1 };
	int size = 0;
	int expected[]{ 1 };
	print(array, expected, size, "test09");
}

// three elements
void test10() {
	int array[]{ 1, 2, 1 };
	int size = 3;
	int expected[]{ 1, 1, 2 };
	print(array, expected, size, "test10");
}

// three elements
void test11() {
	int array[]{ 1, 2, 2 };
	int size = 3;
	int expected[]{ 2, 2, 1 };
	print(array, expected, size, "test11");
}


// three elements
void test12() {
	int array[]{ 2, 2, 1 };
	int size = 3;
	int expected[]{ 2, 1, 2 };
	print(array, expected, size, "test12");
}

// three elements
void test13() {
	int array[]{ 2, 1, 2 };
	int size = 3;
	int expected[]{ 2, 2, 1 };
	print(array, expected, size, "test13");
}
