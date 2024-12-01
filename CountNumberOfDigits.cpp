#include <iostream>
using namespace std;
 
int main() {
	// count digit of a number
	int num;
	cout << "Enter digit of any number" << endl;
	cin >> num;
	int count;
	while (num>0)
	{
		num = num/ 10;
		count++;
	}
	cout << "Digit: " << count << endl;
	return 0;
}
