#include <iostream>
using namespace std;

int main() {
	// std::cout << "Hello, world!\a\n";
	// \a System bell
	// \b backspace
	// \f Formfeed (page break)
	// \n Newline (line break)
	// \r Carriage return (returns cursor to start of line)
	// \\ Backslash
	// \' Single quote character
	// \" Double quote character
	// \some integer x The character represented by x
	cout << "Hello, world!" << endl;
	int x;
	cin >> x;
	x += 2;
	cout << x / 3 << ' ' << x * 2;
	return 0;

