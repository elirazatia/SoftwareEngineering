// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

char helloWorldString[] = { 'h', 'e', 'l', 'l', 'o', 0 };
char* dynamicSize = new char[0];

int main()
{
    std::cout << "Hello World!\n";

	dynamicSize = new char[4];
	dynamicSize[0] = 'a';
	dynamicSize[1] = 'b';
	dynamicSize[2] = 'c';
	dynamicSize[3] = 'f';

	helloWorldString[3] = 'e';
	for (int x = 0; x < sizeof(dynamicSize); x++)
	{
		std::cout << dynamicSize[x];
	}
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
