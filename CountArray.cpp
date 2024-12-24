#include <iostream>
using namespace std;
 
int main() {
	// Count Array
	string s1,s2;
	cout << "Enter two strings" << endl;
	cin >> s1 >> s2;
	char count[256] = {0};
	for (char x :s1)
	{
		count[x]++;
	}
	for (char x:s2)
	{
		count[x]--;
	}
	for (int i=0; i<256; i++)
	{
		if (count[i]==1)
		{
			cout << "extra char is :" << char(i)<< endl;
		}
	}
	return 0;
}