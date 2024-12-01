#include <iostream>
using namespace std;
 
int factorial(int a)
{
	for (int i =a-1; i>0; i--)
	{
		a = a*i;
	}
	return a;
}
 
int main() {
	// Factorial of a number
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << factorial(num) << endl;
	return 0;
}