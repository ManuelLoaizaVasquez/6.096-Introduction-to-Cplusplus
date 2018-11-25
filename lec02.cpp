#include <iostream>
using namespace std;

int main() {
	// > Greater than
	// >= Greater than or equal to
	// < Less than
	// <= Less than or equal to
	// == Equal to
	// != Not equal to
	// && and
	// || or
	// ! not
	// if, if-else and else if
	int x = 6;
	int y = 2;
	if (x > y)
		cout << "x is greater than y\n";
	else if (y > x)
		cout << "y is greater than y\n";
	else
		cout << "x and y are equal\n";
	// switch-case
	switch(x) {
		case 1:
			cout << "x is 1\n";
			break;
		case 2:
		case 3:
			cout << "x is 2 or 3\n";
			break;
		default:
			cout << "x is not 1, 2 or 3\n";
	}
	// while
	x = 0;
	while (x < 10) {
		x++;
		cout << "x is " << x << "\n";
	}
	// do-while
	x = 0;
	do {
		x++;
		cout << "x is " << x << "\n";
	} while (x < 10);
	// for
	for (int i = 0; i < 10; i++)
		cout << i << endl;
	int i = 0;
	for (; i < 10; i++)
		cout << i << endl;
	// nested control structures
	x = 6;
	y = 0;
	if (x > y) {
		cout << "x is greater than y" << endl;
		if (x == 6)
			cout << "x is equal to 6" << endl;
		else
			cout << "x is not equal to 6" << endl;
	} else
		cout << "x is not greater than y" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cout << j;
		cout << endl;
	}
	return 0;
}
