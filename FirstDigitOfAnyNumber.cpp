#include <iostream>
using namespace std;
 
int main() {
	// First digit of any number
	int num;
	cout << "Enter any number" << endl;
	cin >> num;
	while (num>10)
	{
			num= num/10;
	}
	cout << "First digit is :" << num << endl;
	return 0;
}