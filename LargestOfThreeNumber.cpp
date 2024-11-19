#include <iostream>
using namespace std;
 
int main() {
	// Largest fof the three number
	int a, b, c;
	cout << "enter numbers: " << endl;
	cin >> a >> b >> c;
	if ((b>a) &&(b>c))
	{
		cout << "largest is :" << b;
	}
	else if((c>a) && (c>b))
	{
		cout << "largest is:" <<c ;
	}
	else
	cout << "largest is: " << a;
	return 0;
}