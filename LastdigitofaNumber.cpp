#include <iostream>
using namespace std;
 
int main() {
	// Last digit of any number
	int num;
	cout << "enter any number" << endl;
	cin >> num;
	int output=  num%10;
	if (output > 0)
	{
		cout << "last digit is: " << output << endl;
	}
	else
	{
		cout << "last digit is: " << output-(2*output) << endl;
	}
	return 0;
}