#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void fun(int& x)
{
	x += 10;
}

int main()
{
	fun(10);

	system("pause");
	return 0;
}