#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Decimal to Binary
	int num;
	cout << "Enter a decimal number" << endl;
	cin >> num;
	int rem;
	vector <int> v; 
	while (num>0)
	{
		rem = num%2;
		v.push_back(rem);
		num = num/2;
	}
	for (int i=v.size()-1; i>=0; i--)
	{
		cout << v[i] ;
	}

	return 0;
}