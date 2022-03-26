#include <iostream>
#include <bits/stdc++.h>

int main () 
{

	// Initializing character variable
	char x;

	// Uppercase for loop
	std::cout << "Uppercase Alphabet: ";
	for (x = 'A'; x <= 'Z'; x++)
	{
		std::cout << x; 	
	}
	// Line break
	std::cout << std::endl;

	// Lowercase for loop
	std::cout << "Lowercase Alphabet: ";
	for (x = 'a'; x <= 'z'; x++)
	{
		std::cout << x;
	}
	// Line break
	std::cout << std::endl;
	
	return 0;
}