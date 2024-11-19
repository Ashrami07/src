#include <iostream>
using namespace std;
 
int main() {
	// Sum of n natural numbers
	int num, sum;
	cout<< "Enter number" << endl;
	cin >> num;
	for (int i = 0; i<= num; i++)
	{
		sum = sum+i;
	}
	int sum_formula= num*(num+1)/2;
	cout << "Sum is " << sum << endl;
	cout << "sum_formula is " << sum_formula << endl;
	return 0;
}