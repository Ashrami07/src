#include <iostream>
using namespace std;

int main() {
	// Check prime number
	int num;
	cout << "Enter any number" << endl;
	cin >> num;
	if ((num ==0)||(num==1)) {cout << "neither prime nor composite" << endl;}
	for (int i=2; i<=num; i++)
	{
		if ((num%i==0) && (num==i)|| (i==1))
		{	
			cout << " prime number: " << num << endl;
		    break;
		}
		else
		{
			cout << "composite number: " << num << endl;
			break;
		}
	}
	return 0;
}