#include <iostream>
using namespace std;
 
int main() {
	// Even odd game
	int num; 
	cout << "enter number of cups: " << endl;
	cin >> num;
	if (num%2==0)
	{
		cout << "I Lose" << endl;
	}
	else
	{
		cout << "I Win" << endl;
	}
	return 0;
}