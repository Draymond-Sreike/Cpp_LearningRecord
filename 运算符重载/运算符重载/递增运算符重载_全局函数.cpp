#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class MyInteger
{
	friend MyInteger& operator++(MyInteger& myInt);
	friend MyInteger operator++(MyInteger& myInt, int);

	friend ostream& operator<<(ostream& cout, const MyInteger& myInt);

public:
	MyInteger()
	{
		value = 0;
	}

	MyInteger(int for_value)
	{
		this->value = for_value;
	}

private:
	int value;
};

ostream& operator<<(ostream& cout, const MyInteger& myInt)
{
	cout << myInt.value;
	return cout;
}

MyInteger& operator++(MyInteger& myInt)
{
	myInt.value++;
	return myInt;
}

MyInteger operator++(MyInteger& myInt, int)
{
	MyInteger temp = myInt;
	myInt.value++;
	return temp;
}

void test()
{
	MyInteger myInt1 = 0;
	cout << ++myInt1 << endl;	// 1
	cout << myInt1 << endl;		// 1

	MyInteger myInt2 = 0;
	cout << myInt2++ << endl;	// 0
	cout << myInt2 << endl;	// 1
}

int main()
{
	test();

	system("pause");
	return 0;
}