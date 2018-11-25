#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int sum(const int arr[], const int l) {
	int sum = 0;
	for (int i = 0; i < l; sum += arr[i++]);
	return sum;
}

int main() {
	//array
	int arr[] = {1, 2, 3, 4, 5};
	cout << "Sum: " << sum(arr, 5) << endl;
	//strings
	char helloworld[] = "Hello, world!";
	char helloworld2[] = "Hola, mundo!";
	char hello[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	cout << helloworld << endl;
	cout << helloworld2 << endl;
	cout << hello << endl;
	//cctype
	char xd[] = "He12121l45l24o.12134W562or234l62d";
	char current = xd[0];
	for (int i = 0; current != '\0'; current = xd[++i]) {
		if (isalpha(current))
			cout << (char) (isupper(current) ? tolower(current) : current);
		else if (ispunct(current))
			cout << ' ';	
	}
	cout << endl;
	//cstring
	char xd1[] = "Hello";
	char xd2[] = ", world!";
	char xd3[20] = "";
	char xd4[20] = "";
	strcpy(xd3, xd1);
	strcat(xd4, xd3);
	strcat(xd4, xd2);
	cout << xd4 << endl;
	return 0;
}
