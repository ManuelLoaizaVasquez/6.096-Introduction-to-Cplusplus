#include <iostream>
using namespace std;

int numCalls = 0; // global variable

void foo() {
	numCalls++;
}

int raiseToPower(int base, int exponent) {
	if (exponent == 0) return 1;
	int power = raiseToPower(base, exponent / 2);
	if (exponent % 2 == 0) return power * power;
	return base * power * power;
}

void printNumberIfEven(int num) {
	if (num % 2 == 1) {
		cout << "odd number" << endl;
		return;
	}
	cout << "even number and the number is " << num << endl;
}

void printOnNewLine(int x) {
	cout << "Integer: " << x << endl;
}

void printOnNewLine(int x, int y) {
	cout << "2 Integers: " << x << " and " << y << endl;
}

void printOnNewLine(char *x) {
	cout << "String: " << x << endl;
}

int fibonacci(int n) {
	if (n == 0 || n == 1) // base case
		return 1;
	else // recursive step
		return fibonacci(n - 2) + fibonacci(n - 1);
}

double squareRoot(double num) {
	double low = 1.0;
	double high = num;
	for (int i = 0; i < 30; i++) {
		double estimate = (high + low) / 2;
		if (estimate * estimate > num)
			high = estimate;
		else
			low = estimate;
	}
	return (low + high) / 2;
}

void increment1(int a) {
	a++;
	cout << "a in increment " << a << endl;
}

void increment2(int &a) {
	a++;
	cout << "a in increment " << a << endl;
}

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int divide(int numerator, int denominator, int &remainder) {
	remainder = numerator % denominator;
	return numerator / denominator;
}

int main() {
	// Why define your own functions?
	// Readability is clearer than copy-pasting in an algorithm
	// Maintainability: To change the algorithm, just change the function
	// Code reuse: Lets other people use algorithms you've implemented
	int threeExpFour = raiseToPower(3, 5);
	int sixExpFive = raiseToPower(6, 5);
	int twelveExpZero = raiseToPower(12, 0);
	cout << "3^4 is " << threeExpFour << endl;
	cout << "6^5 is " << sixExpFive << endl;
	cout << "12^0 is " << twelveExpZero << endl;
	// If no values are returned, give the function a void return type
	int x = 4;
	printNumberIfEven(x);
	int y = 5;
	printNumberIfEven(y);
	// Function overloading
	printOnNewLine(69);
	printOnNewLine("Hello, world!");
	printOnNewLine(6, 9);
	// Recursion
	cout << fibonacci(10) << endl;
	// Global variables
	foo(); foo(); foo();
	cout << numCalls << endl;
	// Scope
	cout << squareRoot(69) << endl;
	// Pass by value
	int q = 3;
	increment1(q);
	cout << "q in main " << q << endl;
	// Pass by reference
	q = 3;
	increment2(q);
	cout << "q in main " << q << endl;
	q = 3;
	int r = 5;
	swap(q, r);
	cout << "q " << q << endl;
	cout << "r " << r << endl;
	// Returning multiple variables
	int num = 14;
	int den = 4;
	int rem;
	int result = divide(num, den, rem);
	cout << result << " * " << den << " + " << rem << " = " << num << endl;
	return 0;
}
