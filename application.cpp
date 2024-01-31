#include <iostream>

void swap(int* a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void add(int a, int b)
{
	return a+b;
}

void minas(int a, int b)
{
	
	return a - b;
}

int main()
{
	std::cout << "Hello world." << std::endl;
	return 0;
}