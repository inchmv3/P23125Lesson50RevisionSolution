#include "test.h"

int main() {
	cout << "\033[1;36m";
	cout << "TOTAL 10 tests:\n";

	cout << "\033[0m";
	cout << "----------------------------------------------------\n";

	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();
	test09();
	test10();
	
	return 0;
}