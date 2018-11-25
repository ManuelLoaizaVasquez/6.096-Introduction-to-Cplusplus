#include <iostream>
using namespace std;

void squareByPtr(int *x) {
	*x = *x * *x;
}

int main() {
	// Declaring pointers
	int x = 5;
	int *ptr = &x;
	// Using pointer values
	squareByPtr(&x);
	cout << x << endl;
	// const Pointers
	const int *p1; // changeable pointer to a constant integer
	int * const p2 = &x; // constant pointer to changeable integer data
	const int * const p3 = &x; // forbids changing either the address or the value it points to
	// References: changing z will change y and vice versa
	int y;
	int &z = y; // Makes z a reference to, or alias of, y
	/*
	 * The many faces of * and &
	 * '*'
	 * 1. Placed before the variable name to indicate the variable being declared is a pointer
	 * 2. Placed before the pointer name to deference it
	 * '&'
	 * 1. To indicate a reference data type
	 * 2. To take the adress of a variable
	 */
	// Pointers and arrays
	// arr[i] is *(arr + i)
	int arr[] = {2, 3, 5, 7};
	int *p = arr;
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(arr + 2) << endl;
	cout << *(p + 3) << endl;
	// char * Strings
	char myName1[] = {'M', 'a', 'n', 'u', 'e', 'l', '\0'};
	char *myName2 = "Manuel"; // characters can't be modified
	return 0;
}
