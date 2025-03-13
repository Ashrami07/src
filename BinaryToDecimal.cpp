#include <iostream>
using namespace std;

int main() {
	// Convert binary to decimal--> init base with 1 then take the last value 
	int num;
	cout << "Enter number" << endl;
	cin >> num;
	int base =1;
	int value =0;
	while (num>0)
	{
		int last =num%10;
		value = value +(last*base);
		num = num/10;
		base = base*2;
	}
	cout << value;
	return 0;
}