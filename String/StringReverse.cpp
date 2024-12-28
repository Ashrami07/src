#include <iostream>
using namespace std;
 
int main() {
	// string reverse
	string s,snew;
	cout << "enter a string" << endl;
	cin >> s;
	int len = s.length();
	for (int i =len-1 ;i>=0; i--)
	{
	 snew= snew+ s[i];
	}
	cout << snew;
	return 0;
}
