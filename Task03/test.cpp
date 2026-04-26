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

void print(int array[], int size, string name, bool expected) {
	bool actual = is_the_same_elements(array, size);
	bool result = expected == actual;

	cout << name << " - " << (result ? "completed successfully. Well DONE!!!\033[1;32m [PASS]"
		: "was not running successfully. ERROR!\033[1;31m [FAIL]") << endl;

	cout << "\033[0m";

	if (size > 0) {
		cout << "Array:\t" << convert(array, size) << endl;
	}
	cout << "----------------------------------------------------" << endl;
}

// no matching elements
void test01() {
	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	bool expected = false;
	print(array, size, "test01", expected);
}

// only one pair of matching elements (first and last)
void test02() {
	int array[]{ 10, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;
	bool expected = true;
	print(array, size, "test02", expected);
}

// only one pair of matching elements (at the end)
void test03() {
	int array[]{ 1, 2, 3, 5, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test03", expected);
}

// only one pair of matching elements (at the middle)
void test04() {
	int array[]{ 1, 5, 5, 6, 7 };
	int size = 5;
	bool expected = true;
	print(array, size, "test04", expected);
}

// only one pair of matching elements (at the beginning)
void test05() {
	int array[]{ 5, 5, 6, 7, 8 };
	int size = 5;
	bool expected = true;
	print(array, size, "test05", expected);
}

// only one pair of matching elements (at the middle and the end)
void test06() {
	int array[]{ 1, 5, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test06", expected);
}

// only one pair of matching elements (at the middle)
void test07() {
	int array[]{ 1, 2, 4, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test07", expected);
}

// only one pair of matching elements (at the middle)
void test08() {
	int array[]{ 1, 4, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test08", expected);
}

// only one pair of matching elements (at the beginning and the middle)
void test09() {
	int array[]{ 4, 2, 3, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test09", expected);
}

// only one pair of matching elements (at the middle and the end)
void test10() {
	int array[]{ 1, 2, 5, 4, 5 };
	int size = 5;
	bool expected = true;
	print(array, size, "test10", expected);
}

// two elements
void test11() {
	int array[]{ 1 , 2 };
	int size = 2;
	bool expected = false;
	print(array, size, "test11", expected);
}

// two matching elements
void test12() {
	int array[]{ 2, 2 };
	int size = 2;
	bool expected = true;
	print(array, size, "test12", expected);
}

// all matching elements
void test13() {
	int array[]{ 7, 7, 7, 7, 7 };
	int size = 5;
	bool expected = true;
	print(array, size, "test13", expected);
}

// only one elements
void test14() {
	int array[]{ 1 };
	int size = 1;
	bool expected = false;
	print(array, size, "test14", expected);
}

void test15() {
	int array[]{ 0 };
	int size = 0;
	int expected = false;
	print(array, size, "test15", expected);
}

void test16() {
	int array[]{ 0 };
	int size = -1;
	int expected = false;
	print(array, size, "test16", expected);
}

// all zero (matching) elements
void test17() {
	int array[]{ 0, 0, 0, 0, 0 };
	int size = 5;
	bool expected = true;
	print(array, size, "test17", expected);
}