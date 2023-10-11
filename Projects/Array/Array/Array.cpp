// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

char helloWorldString[] = { 'h', 'e', 'l', 'l', 'o', 0 };
char* dynamicSize = new char[0];

char dynamic[12] = {};
int valA = 3;
long b = 1009491;
long long c = 0xFFEEE;

void updateString(char *arr);

int main()
{
	std::cout << sizeof(valA);
	std::cout << sizeof(b);
	std::cout << sizeof(c);
	std::cout << sizeof(dynamic);

	std::cout << dynamic;
	updateString(&dynamic[2]);
	std::cout << dynamic;
}

void updateString(char *arr) {
	arr = '3';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
