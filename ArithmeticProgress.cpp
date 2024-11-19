#include <iostream>
using namespace std;
 
int main() {
	//Sum of AP tn = a*(n-1)d where a is first term, n is nth term and d is common diff
	int a[] = {3,5,7,9,11};
	int nth, diff;
	cout << "enter nth term" << endl;
	cin >> nth;
	int sum;
	diff = a[1]-a[0];
	for (int i = a[0]; i<sizeof(a); i++)
	{
		sum = a[0]+ (nth-1)*diff;
	}
	cout << "sum: " << sum << endl;
	return 0;
}