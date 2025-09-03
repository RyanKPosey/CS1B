#include <iostream>
void bar();
void foo() {
	std::cout << "foo\n";
	bar();
}
