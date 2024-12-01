#include <iostream>
using namespace std;
 
int main() {
	// Divisor of a number
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Divisors are:" << endl;
	cout << 1 << endl;
	for (int i=2; i<=num; i++)
	{
		if (num%i==0)
		{
			cout << i<< endl;
		}
	}
	return 0;
}