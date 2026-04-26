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

void print(int array[], int size, string name, int expected) {
	int actual = count_nonzero_elements(array, size);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "Array:\t" << convert(array, size) << endl;
	}
	cout << "Count of non-zero elements is " << actual << endl;
	cout << "----------------------------------------------------" << endl;
}

// all non-zero elements
void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	int expected = 10;
	print(array, size, "test01", expected);
}

// only one zero element
void test02() {
	int array[]{ 1, 2, 0, 4, 5 };
	int size = 5;
	int expected = 4;
	print(array, size, "test02", expected);
}

// basic case
void test03() {
	int array[]{ 1, 2, 0, 4, 0, 6, 0, 8, 9, 10 };
	int size = 10;
	int expected = 7;
	print(array, size, "test03", expected);
}

// all zero elements
void test04() {
	const int size = 10;
	int array[size]{ 0 };
	int expected = 0;
	print(array, size, "test04", expected);
}

// only one non-zero element
void test05() {
	int array[]{ 0, 0, 1, 0, 0 };
	int size = 5;
	int expected = 1;
	print(array, size, "test05", expected);
}

// one zero element
void test06() {
	int array[]{ 0 };
	int size = 1;
	int expected = 0;
	print(array, size, "test06", expected);
}

// one non-zero element
void test07() {
	int array[]{ 1 };
	int size = 1;
	int expected = 1;
	print(array, size, "test07", expected);
}

// only one non-zero element
void test08() {
	int array[]{ 0, 1 };
	int size = 2;
	int expected = 1;
	print(array, size, "test08", expected);
}

// wrong size
void test09() {
	int array[]{ 0 };
	int size = 0;
	int expected = -1;
	print(array, size, "test09", expected);
}

// wrong size
void test10() {
	int array[]{ 0 };
	int size = -1;
	int expected = -1;
	print(array, size, "test10", expected);
}
