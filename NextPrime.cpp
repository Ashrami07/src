#include <iostream>
using namespace std;

int nextPrime(int num)
{
	num++;
	int i;
	while(true)
	{
		for (i=2; i<num; i++)
		{
			if (num%i == 0)
			{
				break;
			}
		}
		if (num==i)
		{
			return num;
		}
		num++;
	}
}

int main() {
	// NextPrime Number
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << nextPrime(num); 
	return 0;
}