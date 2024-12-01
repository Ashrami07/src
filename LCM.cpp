#include <iostream>
using namespace std;

int max(int a, int b)
{
	if (b>a){
		return b;
	}
	else{
		return a;
	}
}

int main() {
	// LCM of two number
	int num1, num2, lcm;
	cout << "enter two numbers" << endl;
	cin >> num1 >> num2;
	int start = max(num1, num2);
	int end = num1*num2;
	for (int i=start; i<=end; i++)
	{
		if((i%num1==0) && (i%num2==0))
		{
			cout << "LCM:" << i;
			break;
		}
	}
	return 0;
}