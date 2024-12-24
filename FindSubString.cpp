#include <iostream>
using namespace std;
 
int main() {
	// Find String
	string str, subStr;
	cout << "Enter a string" << endl;
	cin  >>str;
	cout << "Enter the sub string" << endl;
	cin >> subStr;
	int len = str.length();
	int found = str.find(subStr);
	while (found !=string::npos)
	{
		cout << "pattern found at: " << found  << endl;
		found = str.find(subStr, found+1);
	}
	return 0;
}