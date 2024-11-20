#include <iostream>
using namespace std;

int main() {
	// print n tables {table of first n positive num}
	int n;
	cout << "Enter N" << endl;
	cin >> n;
	for (int i=2; i<=n;i++)
	{
		for (int j=1; j<=10; j++)
		{
			cout << " "<< i*j << " ";
		}
		cout<< endl;
	}
	return 0;
}