#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	// Geometric Progression tn = a* r^(n-1) where a is the first term, 
	//r is the common difference and n is the nth term
	int a, diff, nth;
	cout<< "enter the first term of GP" << endl;
	cin>>a;
	cout<< "enter the common diff" << endl;
	cin >> diff;
	cout<< "enter the nth term" <<endl;
	cin >> nth;
	int sum = a*(int)pow(diff,nth-1);
	cout << "sum: " <<sum <<endl;
	return 0;
}