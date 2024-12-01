#include <iostream>
using namespace std;
 
int main() {
	// GCD of a number
	int num1, num2, min, ans;
	cout << "Enter a number:" << endl;
	cin >> num1;
	cout << "Enter second number:" << endl;
	cin >> num2;
	if (num1<num2)
	{
		min = num1;
	}
	else{min = num2;}
	for (int i=1; i<=min; i++)
	{
		if ((num1%i==0)&&(num2%i==0))
		{
			ans = i;
		}
	}
	cout << ans;
	return 0;
}