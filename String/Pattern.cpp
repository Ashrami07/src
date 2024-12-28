#include <iostream>
using namespace std;

void pattern1()
{
		for (int i =0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
//Triangle
void pattern2()
{
		for (int i =1; i<=4; i++)
	{
		for (int j=0; j<i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
//Inverted Triangle 1
void pattern3()
{
		for (int i=0; i<=4; i++)
	{
		for (int j=4; j>i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}


int main() {
	// Patterns
	pattern1();
	cout << endl;
	pattern2();
	cout << endl;
	pattern3();
	return 0;
}