#include <iostream>
using namespace std;
 
void table(int num){
	for (int i =1; i<=10; i++)
	{
		int out= num*i;
		cout << num << " * " << i << " = " << out << endl;
	}
}
 
int main() {
	// Table of any number
	int num;
	cout << "Enter number:"<< endl;
	cin >> num;
	table(num);
	return 0;
}
